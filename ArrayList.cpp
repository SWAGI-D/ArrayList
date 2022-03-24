#include <iostream>

using namespace std;

template <typename T>
class ArrayList
{
public:
	ArrayList(const int& n)
	{
		this->n = n;
		arr = new T[n];
		c = 0;
	}
	
	T& at(const int& index) const
	{
		//if(index>=0 && index<c)
		//{
			return arr[index];
		//}
		
		/*else
		{
			throw("CANT");
		}*/
	}
	
	void set(const int& index, const T& t)
	{
		//if(index>=0 && index<c)
		//{
			arr[index] = t;
		//}
		
		/*else
		{
			throw("CANT");
		}*/
	}
	
	void insert(const int& index, const T& t)
	{
		//if(index>=0 && index<c && !full())
		//{
			for(int j = c-1; j>=index; j--)
			{
				arr[j+1] = arr[j];
			}
			
			arr[index] = t;
			c++;
		//}
		
		/*else
		{
			throw("CANT");
		}*/
	}
	
	void erase(const int& index)
	{
		//if(index>=0 && index<c)
		//{
			for(int j = index+1; j<c; j++)
			{
				arr[j-1] = arr[j];
			}
			
			c--;
		//}
		
		/*
		else
		{
			throw("CANT");
		}*/
	}
	
	int size() const
	{
		return c;
	}
	
	bool empty() const
	{
		return (c==0);
	}
	
	bool full() const
	{
		return (c==n);
	}
	
	void print()
	{
		for(int i = 0; i<c; i++)
		{
			cout << arr[i] << " ";
		}
		
		cout << endl;
	}


private:
	T* arr;
	int n;
	int c;
};

int main()
{
	ArrayList<int> al(10);
	
	for(int i = 0; i<10; i++)
	{
		al.insert(i,i+1);
	}
	
	al.print();
	
	cout << al.at(2) << endl;
	
	al.set(5,13);
	
	al.print();
	
	al.erase(9);
	
	al.print();
	
	return EXIT_SUCCESS;
}
