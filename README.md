# Watermelon Katana

Watermelon Katana libraries for any language.

You can find the documentation for each library in their respective folders.

For example, the documentation for the C library can be found in the `c/` folder.

## Contributing

If you want to contribute, please create a pull request with your changes, and make sure to follow the [styling guide](#styling-guide).

### Styling Guide

All code files should start with the following header:
```c
/*
    * Path: <language>/<library>/<file>.<extension>
    * Library: <library>
    * Name: <file>
    * Description: <description>
    * Author(s): <author(s)>
    * License: <license>
    * Version: <version>
    * Last modified: <last modified>
*/
```

Directories should be named in lowercase, and files should be named in lowercase with underscores instead of spaces.
Directories should also contain the following files at all times:
* `README.md`
* `LICENSE`
* `test.<extension>`
* `CHANGELOG.md`
* `com_watermelonkatana_<library>.<extension>`
* `<Any other files necessary>`
* `<Folder for documentation>`

All code should be formatted with the following style:
```
4 spaces for indentation.
No tabs.
No trailing whitespace.

Seperate functions with 2 newlines.
Seperate classes with 2 newlines.
Seperate structs with 2 newlines.

Use camelCase for variables and functions, and have all functions, variables, and structs start with `com_watermelonkatana_<library>_<name>`.
Use PascalCase for classes, and have all classes start with `ComWatermelonkatana<library><name>`.
Use UPPER_CASE for constants, and have all constants start with `COM_WATERMELONKATANA_<library>_<name>`.

Use `#ifndef` and `#define` for header files. (C/C++ only)
```

Any documentation should be formatted with the following style:
```md
# <Library> <Name>

## Description

<Description>

## Functions

### <Function name>

#### Description

<Description>

#### Parameters

<Parameters>

#### Returns

<Returns>

#### Example usage

<Example usage>

## Classes

### <Class name>

#### Description

<Description>

#### Functions

##### <Function name>

###### Description

<Description>

###### Parameters

<Parameters>

###### Returns

<Returns>

###### Example usage

<Example usage>
```

## License

This project is licensed under the Ludwig V1.4 License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

* [README template](https://gist.github.com/Colack/aaba50e84972b9566d737ae177d7aabf)