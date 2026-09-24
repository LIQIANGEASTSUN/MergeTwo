
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0311155c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  pcVar3 = (char *)(_UNK_03111810 + 0x3111570);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03111814 + 0x3111584));
    func_0x01438628(*(undefined4 *)(_UNK_03111818 + 0x3111590));
    func_0x01438628(*(undefined4 *)(_UNK_0311181c + 0x311159c));
    func_0x01438628(*(undefined4 *)(_UNK_03111820 + 0x31115a8));
    func_0x01438628(*(undefined4 *)(_UNK_03111824 + 0x31115b4));
    func_0x01438628(*(undefined4 *)(_UNK_03111828 + 0x31115c0));
    func_0x01438628(*(undefined4 *)(_UNK_0311182c + 0x31115cc));
    func_0x01438628(*(undefined4 *)(_UNK_03111830 + 0x31115d8));
    func_0x01438628(*(undefined4 *)(_UNK_03111834 + 0x31115e4));
    func_0x01438628(*(undefined4 *)(_UNK_03111838 + 0x31115f0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x789b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x789b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0311183c + 0x3111648) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03111840 + 0x3111664));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_03111844 + 0x3111688);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x360);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_03111848 + 0x31116b8));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0311184c + 0x31116d0));
  func_0x04cfd2f0(iVar1,uVar2,**(undefined4 **)(_UNK_03111850 + 0x31116e8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar5) {
    puVar10 = *(undefined4 **)(_UNK_03111854 + 0x3111714);
    puVar7 = *(undefined4 **)(_UNK_03111858 + 0x311171c);
    piVar8 = *(int **)(_UNK_0311185c + 0x3111724);
    do {
      if (*(int *)(**(int **)(_UNK_03111860 + 0x311172c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_03111864 + 0x3111748));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x360);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x04cfd760(iVar1,uVar5,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x03b73d40(iVar6,uVar2,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_0311139c(uVar2);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_031114a8(uVar2);
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 < 0x80000000);
  }
  return;
}

