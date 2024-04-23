#include <unistd.h>
#include <stdio.h>

int _length(char *data) 
{
    int i = 0;

    while (data[i]) {
        i++;
    }

    return (i);
}

void print_addr_as_hex(unsigned long pointer) {
    // 000000010a161f.
    char hex[14] = { '0' };

    int it = 13;
    int value  = 0;

    while (pointer > 0) {
        value = pointer % 16;

        if (value > 9) {
            hex[it--] = value - 10 + 'a';
        } else {
            hex[it--] = value + '0';
        }

        pointer /= 16;
    }

    while (it >= 0)
        hex[it--] = '0';

    write(1, hex, 14);
    write(1, ": ", 2);
}

void print_byte_as_hex(char byte)
{
    char hex[3] = {'0'};
    char byte_;
    int idx     = 1;
    int v = 0;
    
    hex[2] = 0;

    if (byte_ >= 32 && byte_ < 127) {
        byte_ = '.';
    } else {
        byte_  = byte;
    }

    while (byte_) {
        v = byte_ % 16;
        if (v >= 10) {
            hex[idx--] = (v - 10 + 'a');
        } else {
            hex[idx--] = (v + '0');
        }
        
        byte_ /= 16;
    }

    write(1, hex, 2);
}

void print_byte_pair(char *data)
{
    int  index;
    int  len;

    if (data == NULL) {
        write(1, "    ", 4);
        write(1, " ", 1);
        return ;
    }

    index = 0;
    len = _length(data);      

    while (index < len) {
        print_byte_as_hex(data[index + 0]);
        if (index + 1 < len) {
            print_byte_as_hex(data[index + 1]);
        } else {
            print_byte_as_hex(0);
        }
        write(1, " ", 1);
        index += 2;
    }
}


void *ft_print_memory(void *addr, unsigned int size) 
{
    int i;
    int j;
    int str_sz[size];
    int max_col = 0;
    char **current;
    if (size == 0) {
        return (addr);
    }

    i = 0;
    current = ((char **) addr);
#include <unistd.h>
#include <stdio.h>

int _length(char *data) 
{
    int i = 0;

    while (data[i]) {
        i++;
    }

    return (i);
}

void print_addr_as_hex(unsigned long pointer) {
    // 000000010a161f.
    char hex[14] = { '0' };

    int it = 13;
    int value  = 0;

    while (pointer > 0) {
        value = pointer % 16;

        if (value > 9) {
            hex[it--] = value - 10 + 'a';
        } else {
            hex[it--] = value + '0';
        }

        pointer /= 16;
    }

    while (it >= 0)
        hex[it--] = '0';

    write(1, hex, 14);
    write(1, ": ", 2);
}

void print_byte_as_hex(char byte)
{
    char hex[3] = {'0'};
    char byte_;
    int idx     = 1;
    int v = 0;
    
    hex[2] = 0;

    if (byte_ >= 32 && byte_ < 127) {
        byte_ = '.';
    } else {
        byte_  = byte;
    }

    while (byte_) {
        v = byte_ % 16;
        if (v >= 10) {
            hex[idx--] = (v - 10 + 'a');
        } else {
            hex[idx--] = (v + '0');
        }
        
        byte_ /= 16;
    }

    write(1, hex, 2);
}

void print_byte_pair(char *data)
{
    int  index;
    int  len;

    if (data == NULL) {
        write(1, "    ", 4);
        write(1, " ", 1);
        return ;
    }

    index = 0;
    len = _length(data);      

    while (index < len) {
        print_byte_as_hex(data[index + 0]);
        if (index + 1 < len) {
            print_byte_as_hex(data[index + 1]);
        } else {
            print_byte_as_hex(0);
        }
        write(1, " ", 1);
        index += 2;
    }
}


void *ft_print_memory(void *addr, unsigned int size) 
{
    int i;
    int j;
    int str_sz[size];
    int max_col = 0;
    char **current;
    if (size == 0) {
        return (addr);
    }

    i = 0;
    current = ((char **) addr);

    while (i < size) {
        str_sz[i] = _length(current[i]);
        if (str_sz[i] > max_col)
            max_col = str_sz[i];
        i++;
    }

    i = 0;
    while (i < size) {
        // DONE
        print_addr_as_hex((unsigned long) current);
        // TODO: print ech and individual two byte pairs.
        print_byte_pair(current[i]);
        // TODO: print the raw content
        // padd.
        j = str_sz[i];
        while (j < max_col) {
            print_byte_pair(NULL);
            j += 2;
        }

        write(1, current[i], str_sz[i]);
        write(1, "\n", 1);
        i++;
    }

    return (addr);
}

    while (i < size) {
        str_sz[i] = _length(current[i]);
        if (str_sz[i] > max_col)
            max_col = str_sz[i];
        i++;
    }

    i = 0;
    while (i < size) {
        // DONE
        print_addr_as_hex((unsigned long) current);
        // TODO: print ech and individual two byte pairs.
        print_byte_pair(current[i]);
        // TODO: print the raw content
        // padd.
        j = str_sz[i];
        while (j < max_col) {
            print_byte_pair(NULL);
            j += 2;
        }

        write(1, current[i], str_sz[i]);
        write(1, "\n", 1);
        i++;
    }

    return (addr);
}
