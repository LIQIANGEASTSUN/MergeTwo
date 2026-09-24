
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c46f4c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01438638(*(undefined4 *)(_UNK_02c46f88 + 0x2c46f5c));
  uVar1 = func_0x014388d4();
  func_0x024eeff0(uVar1,0);
  uVar2 = func_0x01438638(*(undefined4 *)(_UNK_02c46f8c + 0x2c46f78));
  func_0x01438790(uVar1,uVar2);
  func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

