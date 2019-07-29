from conans import ConanFile

class ConanDeps(ConanFile):
    settings = 'os', 'compiler', 'build_type', 'arch'
    #generators = 'cmake'
    generators = 'cmake_paths'

    def configure(self):
        #self.options['boost'].skip_lib_rename = True

        # With shared, we end up not finding the .lib files in the linking phase (msvc)
        self.options['boost'].shared = False

    def requirements(self):
        self.requires('boost/1.70.0@conan/stable')
        #self.requires('boost/1.67.0@conan/stable')

