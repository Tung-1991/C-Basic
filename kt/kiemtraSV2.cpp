#include<iostream>
#include<string>
using namespace std;

// Kieu du lieu cua cac nut tren cay.
struct SinhVien 
{	
	int maSV;         // Ma sinh vien.
	string tenSV;     // Ten sinh vien.
	float diemTB;     // Diem trung binh.
	SinhVien * left;  // Con tro toi nut con trai.
	SinhVien * right; // con tro toi nut con phai.
	//sv
	SinhVien(int msv, string ten, float dtb, SinhVien * l, SinhVien * r) 
	{
	maSV = msv;
	tenSV = ten;
	diemTB = dtb;
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
		
		// Ham chen mot sinh vien moi vao cay.
		void insert(int maSV,string tenSV,float diemTB) 
		{
			insert (maSV, tenSV, diemTB, root);
		}
		
		// Ham tim kiem sinh vien theo ma sinh vien.
		SinhVien * search(int maSV) 
		{
			return search(maSV, root); // Tra ve con tro toi nut sinh vien tim duoc. Neu khong tim duoc tra ve NULL.
		}
		
		// Ham tim sinh vien co diem trung binh cao nhat.
		SinhVien * findMax() 
		{
			SinhVien * v = findMax(root);
			return v;
		}
		
		// Ham tim sinh vien co diem trung binh thap nhat.
		SinhVien * findMin() 
		{
			SinhVien * v = findMin(root);
			return v;
		}
		
    	void hienmenu()
		{
			cout<<"=========================================="<<"\n";
			cout<<" MENU "<<"\n";
			cout<<"=========================================="<<"\n";
			cout<<" 1. Them 1 sinh vien va hien sinh vien san co."<<"\n";	
			cout<<" 2. tim sinh vien bang MSV va hien thi MSV da nhap."<<"\n";
			cout<<" 3. Diem trung binh cao nhat."<<"\n";
			cout<<" 4. Diem trung binh thap nhat."<<"\n";
		}
		
		void hienmanhinh()
    	{
        hien(root);
        cout <<" " <<endl;
    	}
    	
	private:
		// Con tro toi goc cay.
		SinhVien * root;
		
		// Xoa rong cay co goc duoc tro boi t. 
		void makeEmpty(SinhVien *& t) {
			if (t == NULL)
				return;			   // Tra ve neu cay rong.
			makeEmpty(t -> left);  // Xoa cay con trai.
			makeEmpty(t -> right); // Xoa cay con phai.
			delete t;			   // Xoa nut goc t.
			t = NULL;
		}
		
		// Chen sinh vien moi vao cay co goc duoc tro toi t.
		void insert(int maSV,string tenSV,float diemTB, SinhVien *& t) 
		{
			if (t == NULL)
				t = new SinhVien(maSV, tenSV, diemTB, NULL, NULL);
			else if (diemTB < t-> diemTB)
				insert (maSV, tenSV, diemTB, t -> left);   // Chen vao ben trai.
			else if (diemTB > t-> diemTB)
				insert (maSV, tenSV, diemTB, t -> right);  // Chen vao ben phai.
			else										   // Ma sinh vien can chen trung ma sinh vien tren goc.
			;											   // Khong lam gi ca.
		}
		
		// Tim sinh vien theo ma sinh vien co tren cay duoc tro boi t
		SinhVien * search(int maSV, SinhVien * t) 
		{  // Tro toi nut chua sinh vien tim duoc. Tra ve NULL neu khong tim duoc.
			if (t == NULL) 							 // Neu goc rong tra ve NULL.
				return NULL;
			else if (maSV < t -> maSV)				 // Tim o ben trai goc.
				return search(maSV, t -> left);
			else if (maSV > t -> maSV)				 // TIm o ben phai goc.
				return search(maSV, t -> right);
			else
				return t;
		}
		
		// Tim sinh vien co diem trung binh cao nhat o goc t.
		SinhVien * findMax(SinhVien * t) 
		{
			if (t == NULL)				// Neu goc t rong, tra ve NULL.
				return NULL;
			if (t -> right == NULL)		// Tim o ben phai goc.
				return t;
			return findMax(t -> right);
		}
		
		// Tim sinh vien co diem trung binh thap nhat o goc t.
		SinhVien * findMin(SinhVien * t) 
		{
			if (t == NULL)				// Neu goc rong, tra ve NULL.
				return NULL;
			if (t -> left == NULL)		// Tim o ben trai goc.
				return t;
			return findMin(t -> left);
		}
		
		//hien thi sinh vien
		void hien(SinhVien* t)
    	{
        if(t == NULL)
            return;
        hien(t->left);
        cout<<"\nMa Sinh Vien: "<<t->maSV;
        cout<<"\nTen Sinh Vien: "<<t->tenSV;
        cout<<"\nDiem Trung Binh: "<<t->diemTB<<endl;
        hien(t->right);
		}
};

//ham main
int main() 
{
	//khai bao
	BST t;   
	int maSV;        
	string tenSV;
	float diemTB;
	int n;
	
	// Danh sach sinh vien co san.
	t.insert(1,"Hieu", 1.9);
	t.insert(2,"Truong",1.3);
	t.insert(3,"Thai",2.5);
	t.insert(4,"Tung",2.3);
	t.hienmenu();
	string confirm="y";
	do
	{
		cout<<"\nNhap lua chon cua ban (1-4): ";
		cin>>n;
		
		//them sv
		if(n == 1)	
		{
		cout<<"nhap sinh vien moi va hien thi sinh vien cu: ";
		cin>> maSV;
		cout<<"nhap vao ten sinh vien: ";
		cin>>tenSV;
		cout<<"nhap diem trung binh cua sinh vien: ";
		cin>>diemTB;
		t.insert(maSV,tenSV,diemTB);
		t.hienmanhinh();
		}
		
		//tim kiem sv
		else if(n ==2)
		{
			cout << "MSV va Ten sv moi: "<<maSV<<"."<<tenSV<<"\ntim sv co MSV: ";
			cin >> maSV;
			SinhVien * a = t.search(maSV);
			if (maSV >= 0) 
			{
				if (a != NULL)
					cout << "Sinh vien co so bao danh " << a -> maSV << " la " << a -> tenSV << endl;
				else
					cout << "Khong tim thay sinh vien " << endl;
 			}
		}
		
		//tim kiem diem tb cao nhat
		else if(n==3)
		{
		SinhVien * max = t.findMax();
		cout << "Sinh vien co diem trung binh cao nhat la: " << max -> tenSV << endl << endl;
		}	
		
		//tim kiem diem tb thap nhat
		else if (n==4)	
		{
		SinhVien * min = t.findMin();
		cout << "Sinh vien co diem trung binh thap nhat la: " << min -> tenSV << endl;
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
