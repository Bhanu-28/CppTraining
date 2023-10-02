#include<iostream>
#include<vector>
#include<list>

class Meta
{
private:
    /* data */
    int _tag_id;
    std::string _founder_name;
public:
    Meta(int id,std::string founderName) {
        this->_tag_id;
        this->_founder_name;
    }
    ~Meta() {}
};

class FaceBook : public Meta
{
private:
    /* data */
    int _no_of_users;
    std::string _fb_name;
public:
    FaceBook(/* args */
    int id,std::string founderName ,int nusers,std::string fbname) 
    :Meta(id,founderName){
            this->_no_of_users;
            this->_fb_name;
    }
    ~FaceBook() {}
};

int main(){
    FaceBook* f1 = new FaceBook(1,"zuckerberg",300000000,"pradeep_naidu");
    Meta* m1 = new Meta(2,"carl pie");

    Meta* arr[2] = {f1,m1};

std::list<Meta*> data1={f1,m1};
std::vector<Meta*> data2={f1,m1};
    std::cout<<f1<<"\n";
    std::cout<<m1<<"\n";


}

/*
#include <iostream>
#include <vector>
#include <list>
#include <string>

class Meta
{
private:
    int _tag_id;
    std::string _founder_name;

public:
    Meta(int id, std::string founderName) : _tag_id(id), _founder_name(founderName) {}

    void displayMetaInfo()
    {
        std::cout << "Tag ID: " << _tag_id << std::endl;
        std::cout << "Founder Name: " << _founder_name << std::endl;
    }
};

class FaceBook : public Meta
{
private:
    int _no_of_users;
    std::string _fb_name;

public:
    FaceBook(int id, std::string founderName, int nusers, std::string fbname)
        : Meta(id, founderName), _no_of_users(nusers), _fb_name(fbname) {}

    void displayFaceBookInfo()
    {
        displayMetaInfo(); // Access base class method
        std::cout << "No. of Users: " << _no_of_users << std::endl;
        std::cout << "Facebook Name: " << _fb_name << std::endl;
    }
};

int main()
{
    FaceBook* f1 = new FaceBook(1, "Zuckerberg", 300000000, "pradeep_naidu");
    Meta* m1 = new Meta(2, "Carl Pie");

    std::list<Meta*> data1 = {f1, m1};
    std::vector<Meta*> data2 = {f1, m1};

    // Display information for f1 (FaceBook object)
    f1->displayFaceBookInfo();

    // Display information for m1 (Meta object)
    m1->displayMetaInfo();

    // Don't forget to delete dynamically allocated objects
    delete f1;
    delete m1;

    return 0;
}
*/