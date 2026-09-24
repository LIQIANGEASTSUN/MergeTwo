
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0175676c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01756ae0 + 0x1756784);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01756ae4 + 0x1756798));
    func_0x01438628(*(undefined4 *)(_UNK_01756ae8 + 0x17567a4));
    func_0x01438628(*(undefined4 *)(_UNK_01756aec + 0x17567b0));
    func_0x01438628(*(undefined4 *)(_UNK_01756af0 + 0x17567bc));
    func_0x01438628(*(undefined4 *)(_UNK_01756af4 + 0x17567c8));
    func_0x01438628(*(undefined4 *)(_UNK_01756af8 + 0x17567d4));
    func_0x01438628(*(undefined4 *)(_UNK_01756afc + 0x17567e0));
    func_0x01438628(*(undefined4 *)(_UNK_01756b00 + 0x17567ec));
    func_0x01438628(*(undefined4 *)(_UNK_01756b04 + 0x17567f8));
    func_0x01438628(*(undefined4 *)(_UNK_01756b08 + 0x1756804));
    func_0x01438628(*(undefined4 *)(_UNK_01756b0c + 0x1756810));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8cd7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01756b10 + 0x1756874) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01756b14 + 0x1756890));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01756b18 + 0x17568b0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 8);
    iVar1 = FUN_0174e5a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01756284(param_1,*(undefined4 *)(iVar1 + 0x74));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f110c(iVar6,uVar2,**(undefined4 **)(_UNK_01756b1c + 0x1756910));
    if (iVar1 != 0) {
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_40,iVar6,**(undefined4 **)(_UNK_01756b20 + 0x1756948));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      iStack_24 = iStack_34;
      puVar5 = *(undefined4 **)(_UNK_01756b24 + 0x1756964);
      puVar7 = *(undefined4 **)(_UNK_01756b28 + 0x175696c);
      while (iVar3 = func_0x015109ec(&uStack_30,*puVar5), iVar6 = iStack_24, iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar6 + 8)) {
          iVar3 = FUN_0174e5a0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uVar2 = *(undefined4 *)(iVar6 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar3,uVar2,*puVar7);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
      }
      func_0x0152da2c(&uStack_30,**(undefined4 **)(_UNK_01756b2c + 0x17569f0));
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01756b34 + 0x1756a14));
      if (*(int *)(**(int **)(_UNK_01756b38 + 0x1756a28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_0174c20c();
      if (iVar1 != 0) {
        func_0x01791ce0(iVar1,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8cd7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

