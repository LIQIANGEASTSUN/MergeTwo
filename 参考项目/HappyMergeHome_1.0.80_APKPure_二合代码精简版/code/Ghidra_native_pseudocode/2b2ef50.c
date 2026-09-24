
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b3ef50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(iRam02b3f0c0 + 0x2b3ef70);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b3f0c4 + 0x2b3ef84));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6a3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar5 = func_0x024f56f0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 < param_2) {
    param_2 = iVar1;
  }
  if ((param_2 <= iVar1) && (*(int *)(param_1 + 0x68) < param_2)) {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x046cc810(iVar1,param_2,**(undefined4 **)(_UNK_02b3f0c8 + 0x2b3f01c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    return *(undefined4 *)(iVar1 + 0x20);
  }
  uVar5 = func_0x01524ffc(&stack0xffffffec,0);
  uVar3 = func_0x01438638(*(undefined4 *)(_UNK_02b3f0cc + 0x2b3f05c));
  uVar2 = func_0x01438638(*(undefined4 *)(_UNK_02b3f0d0 + 0x2b3f06c));
  uVar5 = func_0x024eee28(uVar3,uVar5,uVar2,0);
  func_0x01438638(*(undefined4 *)(_UNK_02b3f0d4 + 0x2b3f090));
  uVar3 = func_0x014388d4();
  func_0x014e95c8(uVar3,uVar5,0);
  uVar5 = func_0x01438638(*(undefined4 *)(_UNK_02b3f0d8 + 0x2b3f0b0));
  func_0x01438790(uVar3,uVar5);
  func_0x014385d0();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

