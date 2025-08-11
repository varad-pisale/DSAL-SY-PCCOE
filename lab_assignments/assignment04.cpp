/**
 * ===============================================
 * @file        assignment04.cpp
 * @path        /code/DSA/problems/lab_assignments
 * @author      Om Khalane
 * @created     2025-08-11
 * @updated     2025-08-11
 *
 * @description N/A
 *
 * @tech        HTML
 *
 * @notes       N/A
 * ===============================================
 */

// 4 Linked List Design a music playlist system using a linked list where:
// ● Songs can be added to the beginning/end
// ● Songs can be deleted
// ● Next and previous songs can be navigated

#include <bits/stdc++.h>
using namespace std;

class playlist
{
public:
    string data;
    playlist *next;
    playlist()
    {
        next = nullptr;
    }
    playlist(string song_name)
    {
        data = song_name;
        next = NULL;
    }
};
class ll
{
public:
    playlist *head;
    playlist *tail;
    playlist *currentsong;
    ll()
    {
        head = NULL;
        tail = NULL;
        currentsong = NULL;
    }

    void insert_song_end(string NameAtEnd)
    {
        playlist *newsong = new playlist(NameAtEnd);
        if (head == NULL)
        {
            head = newsong;
            tail = newsong;
            currentsong = newsong;
            return;
        }

        tail->next = newsong;
        tail = newsong;
    }
    void insert_song_beg(string NameAtBeg)
    {
        playlist *newsong = new playlist(NameAtBeg);
        if (head == NULL)
        {
            head = newsong;
            tail = newsong;
            currentsong = newsong;
            return;
        }

        newsong->next = head;
        head = newsong;
    }

    void display_songs()
    {
        if (head == NULL)
        {
            cout << "The list of song is empty!!" << endl;
            return;
        }
        else
        {
            playlist *temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL " << endl;
        }
    }

    void deletesong(string ToDelete)
    {
        if (head == nullptr)
        {
            cout << "The list of songs is empty!!" << endl;
            return;
        }

        if (head->data == ToDelete)
        {
            playlist *toDeleteNode = head;
            head = head->next;
            if (currentsong == toDeleteNode)
                currentsong = head;
            if (head == nullptr)
                tail = nullptr;
            delete toDeleteNode;
            cout << "Song deleted successfully!" << endl;
            return;
        }

        playlist *temp = head;
        while (temp->next != nullptr && temp->next->data != ToDelete)
        {
            temp = temp->next;
        }

        if (temp->next == nullptr)
        {
            cout << "Song not found in playlist!" << endl;
            return;
        }

        playlist *toDeleteNode = temp->next;
        temp->next = toDeleteNode->next;

        if (toDeleteNode == tail)
        {
            tail = temp;
        }
        if (currentsong == toDeleteNode)
        {
            currentsong = temp;
        }

        delete toDeleteNode;
        cout << "Song deleted successfully!" << endl;
    }

    void NextSong()
    {
        if (currentsong == nullptr)
        {
            cout << "Playlist is empty!" << endl;
            return;
        }
        if (currentsong->next != nullptr)
        {
            currentsong = currentsong->next;
            cout << "Now playing: " << currentsong->data << endl;
        }
        else
        {
            cout << "currently on first song" << endl;
        }
    }

    void PreviousSong()
    {
        if (currentsong == nullptr)
        {
            cout << "Playlist is empty!" << endl;
            return;
        }
        if (currentsong == head)
        {
            cout << "last song reached" << endl;
            return;
        }

        playlist *temp = head;
        while (temp->next != currentsong)
        {
            temp = temp->next;
        }
        currentsong = temp;
        cout << "Now playing: " << currentsong->data << endl;
    }
};
int main()
{

    int choice;
    int loop = 1;
    ll l1;
    while (loop == 1)
    {
        string sname;
        cout << "===============WELCOME TO YOUR MUSIC PLAYER==================" << endl;
        cout << "1: TO ADD THE SONG AT THE BEGINING" << endl
             << "2:TO ADD THE SONG AT THE END" << endl
             << "3:TO DISPLAY Playlist" << endl
             << "4: To navigate to next song" << endl
             << "5: To navigate to next song" << endl
             << "6:EXIT" << endl;
        cout << "==================================================================" << endl;

        cout << endl
             << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the song to add at the begining" << endl;
            getchar();
            getline(cin, sname);
            l1.insert_song_beg(sname);
            break;
        case 2:
            cout << "enter the song to add at the end " << endl;
            getchar();
            getline(cin, sname);
            l1.insert_song_end(sname);
            break;
        case 3:
            cout << "=============DISPLAYING THE LIST=============" << endl;
            l1.display_songs();
            cout << endl;
            break;
        case 4:
            cout << "Nevigating to next song" << endl;
            l1.NextSong();
            break;
        case 5:
            cout << "nevigating to previous song" << endl;
            l1.PreviousSong();
            break;
        case 6:
            cout << "enter song name to delete" << endl;
            string a;
            getchar();
            getline(cin, a);
            deletesong(a);
            break;

        case 7:
            loop--;
            break;

        default:
            cout << "enter a valid input!!" << endl;
            break;
        }
    }

    return 0;
}
