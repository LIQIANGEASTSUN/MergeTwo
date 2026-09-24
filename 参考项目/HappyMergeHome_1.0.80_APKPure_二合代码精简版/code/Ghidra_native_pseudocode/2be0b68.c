
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf0b68(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(iRam02bf0c9c + 0x2bf0b80);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf0ca0 + 0x2bf0b94));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3e0b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3e0b,0);
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x014388e8();
  }
  piVar6 = *(int **)(iVar1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar1 = **(int **)(_UNK_02bf0ca4 + 0x2bf0c1c);
  if (piVar6 == (int *)0x0) {
    func_0x014388e4();
  }
  if (*(int *)(*piVar6 + 0x20) == *(int *)(iVar1 + 0x20)) {
    piVar6 = (int *)func_0x014387b0(piVar6);
    if (*piVar6 == iVar3) {
      iVar1 = 0;
      while( true ) {
        iVar3 = *(int *)(param_1 + 0x44);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar1) break;
        FUN_02bef26c(param_1,iVar1);
        iVar1 = iVar1 + 1;
      }
    }
    return;
  }
  func_0x01438ca8(piVar6,iVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

