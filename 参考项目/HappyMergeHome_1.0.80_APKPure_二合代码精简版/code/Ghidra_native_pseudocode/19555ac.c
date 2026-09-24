
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019655ac(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01965860 + 0x19655c0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01965864 + 0x19655d4));
    func_0x01438628(*(undefined4 *)(_UNK_01965868 + 0x19655e0));
    func_0x01438628(*(undefined4 *)(_UNK_0196586c + 0x19655ec));
    func_0x01438628(*(undefined4 *)(_UNK_01965870 + 0x19655f8));
    func_0x01438628(*(undefined4 *)(_UNK_01965874 + 0x1965604));
    func_0x01438628(*(undefined4 *)(_UNK_01965878 + 0x1965610));
    func_0x01438628(*(undefined4 *)(_UNK_0196587c + 0x196561c));
    func_0x01438628(*(undefined4 *)(_UNK_01965880 + 0x1965628));
    func_0x01438628(*(undefined4 *)(_UNK_01965884 + 0x1965634));
    func_0x01438628(*(undefined4 *)(_UNK_01965888 + 0x1965640));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9929,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9929,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0196588c + 0x1965698) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01965890 + 0x19656b4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_01965894 + 0x19656d8);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x39c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01965898 + 0x1965708));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0196589c + 0x1965720));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_019658a0 + 0x1965738));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_019658a4 + 0x1965764);
    puVar7 = *(undefined4 **)(_UNK_019658a8 + 0x196576c);
    piVar8 = *(int **)(_UNK_019658ac + 0x1965774);
    do {
      if (*(int *)(**(int **)(_UNK_019658b0 + 0x196577c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_019658b4 + 0x1965798));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x39c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_019653ec(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_019654f8(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

