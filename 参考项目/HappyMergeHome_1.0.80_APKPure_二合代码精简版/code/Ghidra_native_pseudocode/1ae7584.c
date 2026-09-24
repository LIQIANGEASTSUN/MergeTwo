
/* WARNING: Possible PIC construction at 0x01af7788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01af7890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01af778c) */
/* WARNING: Removing unreachable block (ram,0x01af77a4) */
/* WARNING: Removing unreachable block (ram,0x01af77b4) */
/* WARNING: Removing unreachable block (ram,0x01af77b8) */
/* WARNING: Removing unreachable block (ram,0x01af77d4) */
/* WARNING: Removing unreachable block (ram,0x01af77dc) */
/* WARNING: Removing unreachable block (ram,0x01af77fc) */
/* WARNING: Removing unreachable block (ram,0x01af7808) */
/* WARNING: Removing unreachable block (ram,0x01af7818) */
/* WARNING: Removing unreachable block (ram,0x01af781c) */
/* WARNING: Removing unreachable block (ram,0x01af7828) */
/* WARNING: Removing unreachable block (ram,0x01af782c) */
/* WARNING: Removing unreachable block (ram,0x01af7840) */
/* WARNING: Removing unreachable block (ram,0x01af7844) */
/* WARNING: Removing unreachable block (ram,0x01af7854) */
/* WARNING: Removing unreachable block (ram,0x01af7858) */
/* WARNING: Removing unreachable block (ram,0x01af7880) */
/* WARNING: Removing unreachable block (ram,0x01af7884) */
/* WARNING: Removing unreachable block (ram,0x01af7894) */
/* WARNING: Removing unreachable block (ram,0x01af789c) */
/* WARNING: Removing unreachable block (ram,0x01af78ac) */
/* WARNING: Removing unreachable block (ram,0x01af78b0) */
/* WARNING: Removing unreachable block (ram,0x01af78d4) */
/* WARNING: Removing unreachable block (ram,0x01af78d8) */
/* WARNING: Removing unreachable block (ram,0x01af78f4) */
/* WARNING: Removing unreachable block (ram,0x01af78f8) */
/* WARNING: Removing unreachable block (ram,0x01af791c) */
/* WARNING: Removing unreachable block (ram,0x01af792c) */
/* WARNING: Removing unreachable block (ram,0x01af7930) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01af7584(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01af7948 + 0x1af759c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01af794c + 0x1af75b0));
    func_0x01438628(*(undefined4 *)(_UNK_01af7950 + 0x1af75bc));
    func_0x01438628(*(undefined4 *)(_UNK_01af7954 + 0x1af75c8));
    func_0x01438628(*(undefined4 *)(_UNK_01af7958 + 0x1af75d4));
    func_0x01438628(*(undefined4 *)(_UNK_01af795c + 0x1af75e0));
    func_0x01438628(*(undefined4 *)(_UNK_01af7960 + 0x1af75ec));
    func_0x01438628(*(undefined4 *)(_UNK_01af7964 + 0x1af75f8));
    func_0x01438628(*(undefined4 *)(_UNK_01af7968 + 0x1af7604));
    func_0x01438628(*(undefined4 *)(_UNK_01af796c + 0x1af7610));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1bbd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1bbd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_01ae628c();
  if ((iVar1 != 0) && (iVar1 = FUN_01af6f10(param_1), iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_01af7970 + 0x1af768c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e96a8(**(undefined4 **)(_UNK_01af7974 + 0x1af76a8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b76b98(iVar1,0,**(undefined4 **)(_UNK_01af7978 + 0x1af76d4),0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01af797c + 0x1af76f0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01af7980 + 0x1af770c));
      piVar5 = *(int **)(_UNK_01af7984 + 0x1af7720);
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x014387a4();
        iVar4 = *piVar5;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x158);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x02b0fd48(iVar1,uVar6,0);
      if (*(int *)(**(int **)(_UNK_01af7988 + 0x1af7768) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = (*(code *)&UNK_05d3e9a4)(uVar6,0,0);
      return uVar6;
    }
  }
  return 0;
}

