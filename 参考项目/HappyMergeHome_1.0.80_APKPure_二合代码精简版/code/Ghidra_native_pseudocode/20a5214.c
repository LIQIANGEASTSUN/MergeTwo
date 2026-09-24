
/* WARNING: Possible PIC construction at 0x020b561c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020b5664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020b56ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020b56f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020b573c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020b5784: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x020b5740) */
/* WARNING: Removing unreachable block (ram,0x020b56f8) */
/* WARNING: Removing unreachable block (ram,0x020b56b0) */
/* WARNING: Removing unreachable block (ram,0x020b5668) */
/* WARNING: Removing unreachable block (ram,0x020b5620) */
/* WARNING: Removing unreachable block (ram,0x020b5788) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020b5214(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  undefined4 uStack_18;
  
  pcVar8 = (char *)(_UNK_020b57d8 + 0x20b5230);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_020b57dc + 0x20b5244));
    func_0x01438628(*(undefined4 *)(_UNK_020b57e0 + 0x20b5250));
    func_0x01438628(*(undefined4 *)(_UNK_020b57e4 + 0x20b525c));
    func_0x01438628(*(undefined4 *)(_UNK_020b57e8 + 0x20b5268));
    func_0x01438628(*(undefined4 *)(_UNK_020b57ec + 0x20b5274));
    func_0x01438628(*(undefined4 *)(_UNK_020b57f0 + 0x20b5280));
    func_0x01438628(*(undefined4 *)(_UNK_020b57f4 + 0x20b528c));
    func_0x01438628(*(undefined4 *)(_UNK_020b57f8 + 0x20b5298));
    func_0x01438628(*(undefined4 *)(_UNK_020b57fc + 0x20b52a4));
    func_0x01438628(*(undefined4 *)(_UNK_020b5800 + 0x20b52b0));
    func_0x01438628(*(undefined4 *)(_UNK_020b5804 + 0x20b52bc));
    func_0x01438628(*(undefined4 *)(_UNK_020b5808 + 0x20b52c8));
    func_0x01438628(*(undefined4 *)(_UNK_020b580c + 0x20b52d4));
    func_0x01438628(*(undefined4 *)(_UNK_020b5810 + 0x20b52e0));
    func_0x01438628(*(undefined4 *)(_UNK_020b5814 + 0x20b52ec));
    func_0x01438628(*(undefined4 *)(_UNK_020b5818 + 0x20b52f8));
    func_0x01438628(*(undefined4 *)(_UNK_020b581c + 0x20b5304));
    func_0x01438628(*(undefined4 *)(_UNK_020b5820 + 0x20b5310));
    func_0x01438628(*(undefined4 *)(_UNK_020b5824 + 0x20b531c));
    func_0x01438628(*(undefined4 *)(_UNK_020b5828 + 0x20b5328));
    func_0x01438628(*(undefined4 *)(_UNK_020b582c + 0x20b5334));
    func_0x01438628(*(undefined4 *)(_UNK_020b5830 + 0x20b5340));
    func_0x01438628(*(undefined4 *)(_UNK_020b5834 + 0x20b534c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xadd2,0);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    iVar3 = func_0x01523adc(param_2,0);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_020b5838 + 0x20b53c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      piVar4 = (int *)func_0x0364e264(param_2,**(undefined4 **)(_UNK_020b583c + 0x20b53e4));
      if ((piVar4 != (int *)0x0) && (iVar3 = FUN_020b4fec(param_1,piVar4), iVar3 != 0))
      goto LAB_020b55a8;
    }
    if (*(int *)(**(int **)(_UNK_020b5840 + 0x20b5418) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_020b5844 + 0x20b5434));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_18 = 0;
    iVar3 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_020b5848 + 0x20b545c),0,1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f15e8(iVar3,0);
    iVar7 = func_0x01523adc(uVar9,0);
    if (iVar7 == 0) {
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x024f15e8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_020b585c + 0x20b557c) + 0x74) == 0) {
        func_0x014387a4();
      }
      piVar4 = (int *)func_0x0364e264(uVar9,**(undefined4 **)(_UNK_020b5860 + 0x20b5598));
      *(undefined1 *)(param_1 + 0x10) = 0;
LAB_020b55a8:
      if (piVar4 == (int *)0x0) {
        func_0x014388e4();
      }
      uVar9 = (**(code **)(*piVar4 + 0x1b0))
                        (piVar4,**(undefined4 **)(_UNK_020b5864 + 0x20b55c4),
                         *(undefined4 *)(*piVar4 + 0x1b4));
      if (*(int *)(**(int **)(_UNK_020b5868 + 0x20b55e4) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024f05c4(uVar9,0);
      uVar9 = func_0x0364e264(uVar9,**(undefined4 **)(_UNK_020b586c + 0x20b560c));
      puVar5 = (undefined4 *)(param_1 + 0x14);
      *puVar5 = uVar9;
      if (*(int *)(_UNK_01408518 + 0x14084d8) == 0) {
        return;
      }
      puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar5 >> 0x11) * 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
      return;
    }
    iVar7 = **(int **)(_UNK_020b5850 + 0x20b54b4);
    iVar3 = *(int *)(iVar7 + 0x1c);
    if (iVar3 == 0) {
      func_0x014909d8(iVar7);
      iVar3 = *(int *)(iVar7 + 0x1c);
    }
    iVar3 = *(int *)(iVar3 + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x0149097c();
    }
    param_2 = **(undefined4 **)(iVar3 + 0x5c);
    if (*(int *)(**(int **)(_UNK_020b5854 + 0x20b5514) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_020b5854 + 0x20b5514));
    }
    param_1 = **(int **)(_UNK_020b5858 + 0x20b5544);
    iVar3 = func_0x02953fd4(0x53,0,0);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = func_0x029540a4(0x53,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0xadd2,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar6 = 3;
  if (iVar3 == 0) {
    uVar6 = 2;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar6,0,0);
  return;
}

