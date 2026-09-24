
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03157e20(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    func_0x034a8b60(*(undefined4 *)(_UNK_05056584 + 0x50564f4),0,0);
    uVar2 = func_0x034a8aa8();
    uVar1 = func_0x034a8b60(*(undefined4 *)(_UNK_05056588 + 0x5056508));
    func_0x0508e214(uVar2,uVar1,0);
    uVar1 = func_0x034a8b60(*(undefined4 *)(_UNK_0505658c + 0x5056524));
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      *(int *)(param_1 + 8) = param_2;
      (*(code *)0x14385cc)();
      return;
    }
    uVar1 = func_0x034a8b60(*(undefined4 *)(_UNK_05056590 + 0x505653c));
    uVar1 = func_0x051b0d0c(uVar1,0);
    func_0x034a8b60(*(undefined4 *)(_UNK_05056594 + 0x5056554));
    uVar2 = func_0x034a8aa8();
    func_0x0515f4f8(uVar2,uVar1,0);
    uVar1 = func_0x034a8b60(*(undefined4 *)(_UNK_05056598 + 0x5056574));
  }
  func_0x034a8b80(uVar2,uVar1);
  func_0x034a8b90();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

