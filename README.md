# simple-RPC

This is a simple RPC program created using rpcgen.

This RPC program supports following four remote procedures:

- addition : Adds two integers and it returns the integer summation.
- subtraction : returns the difference of two given integers. The return type is integer
- multiplication : returns the multiplication of two given integers
- division : returns the division of two given integers. The return type is integer


FILES:

program.x       : This is the RPC protocol definition file. It containing data structure definitions and
	                function prototypes for the C code generated.
program_server.c: This is the server program.
program_client.c: This is the client program.
