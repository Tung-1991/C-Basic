#include<iostream>
#include<string>
using namespace std;

// Kieu du lieu cua cac nut tren cay.
struct NhanVien 
{	
	int maNV;         // Ma nhan vien.
	string tenNV;     // Ten nhan vien.
	float ns;    	  // Diem nang suat.
	NhanVien * left;  // Con tro toi nut con trai.
	NhanVien * right; // con tro toi nut con phai.
	//nv
	NhanVien(int mnv, string ten, float nangsuat, NhanVien * l, NhanVien * r) 
	{
	maNV = mnv;
	tenNV = ten;
	ns = nangsuat;
	left = l;
	right = r;
	}
};

// Lop cay nhi phan tim kiem.
class BST 
{	
	public:
		// Ham tao.
		BST() 
		{
			root = NULL;
		}
		
		// Ham huy.
		~BST() 
		{
			makeEmpty();
		}
		
		// Ham kiem tra cay rong.
		bool isEmpty() {
			return root == NULL;
		}
		
		// Ham xoa rong cay.
		void makeEmpty() 
		{
			makeEmpty(root);
		}
		
		// Ham chen mot nhan vien moi vao cay.
		void insert(int maNV,string tenNV,float ns) 
		{
			insert (maNV, tenNV, ns, root);
		}
		
		// Ham tim kiem nhan vien theo ma nhan vien.
		NhanVien * search(int maNV) 
		{
			return search(maNV, root); // Tra ve con tro toi nut nhan vien tim duoc. Neu khong tim duoc tra ve NULL.
		}
		
		// Ham tim nhan vien co nang suat lao dong coa nhat.
		NhanVien * findMax() 
		{
			NhanVien * v = findMax(root);
			return v;
		}
		
		// Ham tim nhan vien co nang suat han che nhat.
		NhanVien * findMin() 
		{
			NhanVien * v = findMin(root);
			return v;
		}
		
    	void hienmenu()
		{
			cout<<"=========================================="<<"\n";
			cout<<" MENU "<<"\n";
			cout<<"=========================================="<<"\n";
			cout<<" 1. Them 1 nhan vien va hien nhan vien san co"<<"\n";	
			cout<<" 2. tim nhan vien bang MNV va hien thi MNV da nhap"<<"\n";
			cout<<" 3. nang suat cao nhat thang diem 10"<<"\n";
			cout<<" 4. nang suat han che nhat thang diem 10"<<"\n";
		}
		
		void hienmanhinh()
    	{
        hien(root);
        cout <<" " <<endl;
    	}
    	
	private:
		// Con tro toi goc cay.
		NhanVien * root;
		
		// Xoa rong cay co goc duoc tro boi t. 
		void makeEmpty(NhanVien *& t) {
			if (t == NULL)
				return;			   // Tra ve neu cay rong.
			makeEmpty(t -> left);  // Xoa cay con trai.
			makeEmpty(t -> right); // Xoa cay con phai.
			delete t;			   // Xoa nut goc t.
			t = NULL;
		}
		
		// Chen nhan vien moi vao cay co goc duoc tro toi t.
		void insert(int maNV,string tenNV,float ns, NhanVien *& t) 
		{
			if (t == NULL)
				t = new NhanVien(maNV, tenNV, ns, NULL, NULL);
			else if (ns < t-> ns)
				insert (maNV, tenNV, ns, t -> left);   // Chen vao ben trai.
			else if (ns > t-> ns)
				insert (maNV, tenNV, ns, t -> right);  // Chen vao ben phai.
			else										   // Ma nhan vien can chen trung ma sinh vien tren goc.
			;											   // Khong lam gi ca.
		}
		
		// Tim nhan vien theo ma nhan vien co tren cay duoc tro boi t
		NhanVien * search(int maNV, NhanVien * t) 
		{  // Tro toi nut chua nhan vien tim duoc. Tra ve NULL neu khong tim duoc.
			if (t == NULL) 							 // Neu goc rong tra ve NULL.
				return NULL;
			else if (maNV < t -> maNV)				 // Tim o ben trai goc.
				return search(maNV, t -> left);
			else if (maNV > t -> maNV)				 // TIm o ben phai goc.
				return search(maNV, t -> right);
			else
				return t;
		}
		
		// Tim nhan vien co nang suat cao nhat o goc t.
		NhanVien * findMax(NhanVien * t) 
		{
			if (t == NULL)				// Neu goc t rong, tra ve NULL.
				return NULL;
			if (t -> right == NULL)		// Tim o ben phai goc.
				return t;
			return findMax(t -> right);
		}
		
		// Tim nhan vien vien co nang suat han che nhat o goc t.
		NhanVien * findMin(NhanVien * t) 
		{
			if (t == NULL)				// Neu goc rong, tra ve NULL.
				return NULL;
			if (t -> left == NULL)		// Tim o ben trai goc.
				return t;
			return findMin(t -> left);
		}
		
		//hien thi nhan vien
		void hien(NhanVien* t)
    	{
        if(t == NULL)
            return;
        hien(t->left);
        cout<<"\nMa Nhan Vien: "<<t->maNV;
        cout<<"\nTen Nhan Vien: "<<t->tenNV;
        cout<<"\nNang suat: "<<t->ns<<endl;
        hien(t->right);
		}
};

//ham main
int main() 
{
	//khai bao
	BST t;    
	int maNV;        
	string tenNV;
	float ns;
	int n;
	
	// Danh sach nhan vien co san.
	t.insert(1, "Truong",2);
	t.insert(2,"Hieu",3.7);
	t.insert(3, "Tung",6.5);
	t.insert(4,"Thai",7);
	t.hienmenu();
	string confirm="y";
	do
	{
		cout<<"\nNhap lua chon cua ban (1-4): ";
		cin>>n;
		
		//them nv
		if(n == 1)	
		{
		cout<<"nhap ma nhan vien :";
		cin>> maNV;
		cout<<"nhap vao ten nhan vien :";
		cin>>tenNV;
		cout<<"nhap nang suat lao dong :";
		cin>>ns;
		t.insert(maNV,tenNV,ns);
		t.hienmanhinh();
		}
		
		//tim kiem nv
		else if(n ==2)
		{
			cout << "MNV va Ten nv moi: "<<maNV<<"."<<tenNV<<"\ntim nhan vien co MNV: ";
			cin >> maNV;
			NhanVien * a = t.search(maNV);
			if (0 <= maNV) 
			{
				if (a != NULL)
					cout << "nhan vien co ma so " << a -> maNV << " la " << a -> tenNV << endl;
				else
					cout << "Khong tim thay nhan vien " << endl << endl;
 			}
		}
		
		//tim kiem nang suat cao nhat
		else if(n==3)
		{
		NhanVien * max = t.findMax();
		cout << "nhan vien co nang suat cao nhat la: " << max -> tenNV << endl << endl;
		}	
		
		//nang suat han che nhat
		else if (n==4)	
		{
		NhanVien * min = t.findMin();
		cout << "nhan vien co nang suat han che nhat la: " << min -> tenNV << endl;
		}
		
		//nhap sai
		else
		cout<<"Khong hop le ";
		
		//tiep tuc lenh
		cout<<"Nhan y hoac Y de tiep tuc: ";
		cin>>confirm;
	}
	while(confirm=="y"||confirm=="Y");
};
