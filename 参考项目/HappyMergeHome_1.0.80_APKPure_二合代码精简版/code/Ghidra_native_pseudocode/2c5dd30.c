
/* WARNING: Possible PIC construction at 0x02c6deb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6df90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c6deb4) */
/* WARNING: Removing unreachable block (ram,0x02c6dec0) */
/* WARNING: Removing unreachable block (ram,0x02c6dec4) */
/* WARNING: Removing unreachable block (ram,0x02c6dee4) */
/* WARNING: Removing unreachable block (ram,0x02c6dee8) */
/* WARNING: Removing unreachable block (ram,0x02c6df00) */
/* WARNING: Removing unreachable block (ram,0x02c6df04) */
/* WARNING: Removing unreachable block (ram,0x02c6df20) */
/* WARNING: Removing unreachable block (ram,0x02c6df2c) */
/* WARNING: Removing unreachable block (ram,0x02c6df30) */
/* WARNING: Removing unreachable block (ram,0x02c6df3c) */
/* WARNING: Removing unreachable block (ram,0x02c6df40) */
/* WARNING: Removing unreachable block (ram,0x02c6df48) */
/* WARNING: Removing unreachable block (ram,0x02c6df4c) */
/* WARNING: Removing unreachable block (ram,0x02c6df94) */
/* WARNING: Removing unreachable block (ram,0x02c6dfa0) */
/* WARNING: Removing unreachable block (ram,0x02c6dfa4) */
/* WARNING: Removing unreachable block (ram,0x02c6dfbc) */
/* WARNING: Removing unreachable block (ram,0x02c6dfc0) */
/* WARNING: Removing unreachable block (ram,0x02c6dfc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6dd30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02c6dfd4 + 0x2c6dd48);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6dfd8 + 0x2c6dd5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c6dfdc + 0x2c6dd68));
    func_0x01438628(*(undefined4 *)(_UNK_02c6dfe0 + 0x2c6dd74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5951,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5951,0);
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
    func_0x01523a1c(&uStack_38,param_2,0);
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
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_02c6dfe4 + 0x2c6ddd8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x02c35d10(6,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x014e94d8(iVar1,0);
      if (*(int *)(**(int **)(_UNK_02c6dfe8 + 0x2c6de28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c6dfec + 0x2c6de44));
      uVar4 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar3 = FUN_02be3278(iVar3,uVar4,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x8c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = 0;
        if (0 < *(int *)(iVar3 + 0x50)) {
          uVar2 = 1;
        }
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      goto SUB_014e94e8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x014e94d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
SUB_014e94e8:
  (*(code *)&UNK_05d3ec04)(iVar1,uVar2,0);
  return;
}

