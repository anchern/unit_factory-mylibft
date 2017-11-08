cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c libft.h ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strdup.c
    ft_strlen.c ft_strncpy.c ft_strcat.c ft_strcpy.c ft_strncpy.c ft_strlcat.c ft_strncat.c ft_strchr.c ft_strrchr.c
    ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c
    ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_pow.c ft_memccpy.c)
add_executable(untitled ${SOURCE_FILES})