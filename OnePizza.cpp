#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


#define printrix(X,Y) X <<": {" << Y <<"}\n"
using namespace std;

void Print_vect(vector<int> vect);
void vect_finger(vector<int> vect, int y);
int main(int argc, char const *argv[])
{
    // # of potential clients
    int n; // no of clients
    cin >> n; 
    // cout << printrix("Client", n);

    /**
     * @brief N Clients
     * Each client > Likes & Dislikes
     * Add all Likes to a vector without reps
     * Remove any Likes that is in Dislikes
     * ->[ANS] Size of vector + elements
     */

    vector<string> usr;
    
    // loop thru n and 2 times per n
    for (size_t i = 0; i < n; i++)
    {
        // likes
        int likes;  
        cin >> likes; 
        // cout << printrix("Likes", likes);
        for (size_t j = 0; j < likes; j++)
        {
            string temp;
            cin >> temp;
            // cout << "Str: " << temp << endl;
            // compare ip string to vector
            // if already present then do not add 
            vector<string>::iterator itr = find(usr.begin(), usr.end(), temp);

            if (itr != usr.cend()) {
                // element present
                // cout << "Element present at index " << distance(usr.begin(), itr);
            }
            else {
                // not present
                usr.push_back(temp);
            }
        }    
        // dislikes
        int y;
        cin >> y;

        for (size_t j = 0; j < y; j++)
        {
            string temp;
            cin >> temp;
            // cout << "Str: " << temp << endl;
            // compare ip string to vector
            // if already present then do not add 
            vector<string>::iterator itr = find(usr.begin(), usr.end(), temp);

            if (itr != usr.cend()) {
                // element present
                // cout << "Element present at index " << distance(usr.begin(), itr);
                usr.erase(itr);
            }
            else {
                // not present
                // usr.push_back(temp);
            }
        }    
            
    }

    cout << usr.size() <<" ";
    for (int i = 0; i < usr.size(); i++){
        cout << usr[i] << " ";
    }
    cout << "\n";

    return 0;
}

