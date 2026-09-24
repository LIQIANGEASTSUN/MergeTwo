
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f15448(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02f1561c + 0x2f1545c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f15620 + 0x2f15470));
    func_0x01438628(*(undefined4 *)(_UNK_02f15624 + 0x2f1547c));
    func_0x01438628(*(undefined4 *)(_UNK_02f15628 + 0x2f15488));
    func_0x01438628(*(undefined4 *)(_UNK_02f1562c + 0x2f15494));
    func_0x01438628(*(undefined4 *)(_UNK_02f15630 + 0x2f154a0));
    func_0x01438628(*(undefined4 *)(_UNK_02f15634 + 0x2f154ac));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e3c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02887764 + 0x2887694);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02887768 + 0x28876a8),0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_02f15638 + 0x2f15504);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (*(int *)(**(int **)(_UNK_02f1563c + 0x2f15524) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_02f1563c + 0x2f15524));
  }
  iVar1 = func_0x024eec50(uVar5,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02f15640 + 0x2f15564) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f15644 + 0x2f15580));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = **(undefined4 **)(_UNK_02f1564c + 0x2f155b4);
    uStack_18 = 0;
    uVar5 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_02f15648 + 0x2f155a8),0,1);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
    *puVar2 = uVar5;
    func_0x014385cc(puVar2,uVar5);
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
}

