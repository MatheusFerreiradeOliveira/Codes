#include<bits/stdc++.h>
using namespace std;

// iPair is integer pairs
#define iPair pair<int, int>

// Stores the result (points of convex hull)
set<iPair> hull;
map<iPair, int> mp;

// Returns the side of point p with respect to line
// joining points p1 and p2.
int findSide(iPair p1, iPair p2, iPair p)
{
    int val = (p.second - p1.second) * (p2.first - p1.first) -
              (p2.second - p1.second) * (p.first - p1.first);

    if (val > 0)
        return 1;
    if (val < 0)
        return -1;
    return 0;
}

// returns a value proportional to the distance
// between the point p and the line joining the
// points p1 and p2
int lineDist(iPair p1, iPair p2, iPair p)
{
    return abs ((p.second - p1.second) * (p2.first - p1.first) -
               (p2.second - p1.second) * (p.first - p1.first));
}

// End points of line L are p1 and p2.  side can have value
// 1 or -1 specifying each of the parts made by the line L
void quickHull(vector<iPair> a, int n, iPair p1, iPair p2, int side)
{
    int ind = -1;
    int max_dist = 0;

    // finding the point with maximum distance
    // from L and also on the specified side of L.
    for (int i=0; i<n; i++)
    {
        int temp = lineDist(p1, p2, a[i]);
        if (findSide(p1, p2, a[i]) == side && temp > max_dist)
        {
            ind = i;
            max_dist = temp;
        }
    }

    // If no point is found, add the end points
    // of L to the convex hull.
    if (ind == -1)
    {
        mp[p1]++;
        mp[p2]++;
        if(mp[p1] == 1)hull.push_back(p1);
        if(mp[p2] == 1)hull.push_back(p2);
        return;
    }

    // Recur for the two parts divided by a[ind]
    quickHull(a, n, a[ind], p1, -findSide(a[ind], p1, p2));
    quickHull(a, n, a[ind], p2, -findSide(a[ind], p2, p1));
}

float dist(iPair x, iPair y) {

    return sqrt(((y.first - x.first) * (y.first - x.first)) + ((y.second - x.second) * (y.second - x.second)));

}

void printHull(vector<iPair> a, int n)
{
    // a[i].second -> y-coordinate of the ith point
    if (n < 3)
    {
        cout << "Convex hull not possible\n";
        return;
    }

    // Finding the point with minimum and
    // maximum x-coordinate
    int min_x = 0, max_x = 0;
    for (int i=1; i<n; i++)
    {
        if (a[i].first < a[min_x].first)
            min_x = i;
        if (a[i].first > a[max_x].first)
            max_x = i;
    }

    // Recursively find convex hull points on
    // one side of line joining a[min_x] and
    // a[max_x]
    quickHull(a, n, a[min_x], a[max_x], 1);

    // Recursively find convex hull points on
    // other side of line joining a[min_x] and
    // a[max_x]
    quickHull(a, n, a[min_x], a[max_x], -1);

    float ans = 0.0;

    //cout << "The points in Convex Hull are:\n";

    int x1, x2, y1, y2;
    int cont = 1

    while (!hull.empty())
    {

        if(cont == 1) {
            x1 = *hull.begin().first;
            y1 = *hull.begin().second
        }


        hull.erase(hull.begin());
    }

    //sort(hull.begin(), hull.end());


    /*for(int i = 0; i < hull.size(); ++i) {
        cout<<ans<<endl;
        if(i == hull.size() - 1) ans += dist(hull[i], hull[0]);
        else ans += dist(hull[i], hull[i+1]);
        cout<<ans<<endl;
    }*/

    printf("%.2f\n", ans);
}

// Driver code
int main()
{
    int n;
    while(cin>>n && n!=0){
        vector<iPair> a;
        for(int i = 0; i < n; ++i) {
            int aa, bb;
            cin>>aa>>bb;
            a.push_back({aa, bb});
        }
        printHull(a, n);
    }
    return 0;
}
