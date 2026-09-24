
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fd0dbc(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02fd1074 + 0x2fd0dd4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd1078 + 0x2fd0de8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd107c + 0x2fd0df4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1080 + 0x2fd0e00));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1084 + 0x2fd0e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1088 + 0x2fd0e18));
    func_0x01438628(*(undefined4 *)(_UNK_02fd108c + 0x2fd0e24));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1090 + 0x2fd0e30));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1094 + 0x2fd0e3c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd1098 + 0x2fd0e48));
    func_0x01438628(*(undefined4 *)(_UNK_02fd109c + 0x2fd0e54));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x70c7,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd10a0 + 0x2fd0ec4));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02fd10a4 + 0x2fd0ed8));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_02fd10a8 + 0x2fd0efc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd10ac + 0x2fd0f18));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x0370dea0(iVar1,**(undefined4 **)(_UNK_02fd10b0 + 0x2fd0f38));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_02fd10b4 + 0x2fd0f64));
      puVar5 = *(undefined4 **)(_UNK_02fd10b8 + 0x2fd0f78);
      puVar7 = *(undefined4 **)(_UNK_02fd10bc + 0x2fd0f80);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02fd10c0 + 0x2fd0fd8));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x70c7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02916190(iVar1,param_1,0);
  }
  return iVar1;
}

