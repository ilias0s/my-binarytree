
struct node
{
	int value;
	node* left;
	node* right;
};
class bt 
{
private:
	node* root;
public:
	bt();
	void add(int value);
	bool contains(int value);
};