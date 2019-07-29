#include <boost/filesystem.hpp>

#include <iostream>

using namespace std;
namespace fs = boost::filesystem;

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Application usage: appName path" << endl;
    }

    fs::path p (argv[1]);
    cout  <<  "\ndecomposition:\n";
    cout  <<  "  root_name()----------: " << p.root_name() << '\n';
    cout  <<  "  root_directory()-----: " << p.root_directory() << '\n';
    cout  <<  "  root_path()----------: " << p.root_path() << '\n';
    cout  <<  "  relative_path()------: " << p.relative_path() << '\n';
    cout  <<  "  parent_path()--------: " << p.parent_path() << '\n';
    cout  <<  "  filename()-----------: " << p.filename() << '\n';
    cout  <<  "  stem()---------------: " << p.stem() << '\n';
    cout  <<  "  extension()----------: " << p.extension() << '\n';

    return EXIT_SUCCESS;
}
