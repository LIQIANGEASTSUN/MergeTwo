
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017528dc(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01752cac + 0x17528ec);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01752cb0 + 0x1752900));
    func_0x01438628(*(undefined4 *)(_UNK_01752cb4 + 0x175290c));
    func_0x01438628(*(undefined4 *)(_UNK_01752cb8 + 0x1752918));
    func_0x01438628(*(undefined4 *)(_UNK_01752cbc + 0x1752924));
    func_0x01438628(*(undefined4 *)(_UNK_01752cc0 + 0x1752930));
    func_0x01438628(*(undefined4 *)(_UNK_01752cc4 + 0x175293c));
    func_0x01438628(*(undefined4 *)(_UNK_01752cc8 + 0x1752948));
    func_0x01438628(*(undefined4 *)(_UNK_01752ccc + 0x1752954));
    func_0x01438628(*(undefined4 *)(_UNK_01752cd0 + 0x1752960));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15bf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x15bf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar6 = *(int **)(_UNK_01752cd4 + 0x17529b4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01747688();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_0175022c(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01747688();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017479d8(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01752cd8 + 0x1752a34) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01747688();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0174e5a0(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ceba0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01752cdc + 0x1752abc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01752ce0 + 0x1752ad8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01752ce4 + 0x1752af8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar4 = *(undefined4 **)(_UNK_01752cec + 0x1752b74);
          func_0x024f05a8(0,0x4b,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x4c,*puVar4);
          func_0x014388e4();
          func_0x024f05a8(0,0x4d,*puVar4);
          func_0x014388e4();
        }
        else {
          puVar4 = *(undefined4 **)(_UNK_01752ce8 + 0x1752b30);
          func_0x024f05a8(iVar1,0x4b,*puVar4);
          func_0x024f05a8(iVar1,0x4c,*puVar4);
          func_0x024f05a8(iVar1,0x4d,*puVar4);
        }
        func_0x024f05a8(iVar1,0x4e,**(undefined4 **)(_UNK_01752cf0 + 0x1752bb4));
        if (*(int *)(**(int **)(_UNK_01752cf4 + 0x1752bc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01752cf8 + 0x1752be4));
        piVar6 = (int *)FUN_01747688();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_01752cfc + 0x1752c24);
        iVar8 = *(int *)(iVar7 + 0x1c);
        if (iVar8 == 0) {
          func_0x014909d8(iVar7);
          iVar8 = *(int *)(iVar7 + 0x1c);
        }
        iVar8 = *(int *)(iVar8 + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar5 = **(undefined4 **)(iVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar5,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

