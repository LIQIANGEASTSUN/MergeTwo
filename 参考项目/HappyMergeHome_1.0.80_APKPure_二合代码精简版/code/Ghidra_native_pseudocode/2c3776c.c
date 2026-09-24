
/* WARNING: Possible PIC construction at 0x02c1c42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c4b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1c5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c1c590) */
/* WARNING: Removing unreachable block (ram,0x02c1c5a0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5ac) */
/* WARNING: Removing unreachable block (ram,0x02c1c5b0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5cc) */
/* WARNING: Removing unreachable block (ram,0x02c1c5d0) */
/* WARNING: Removing unreachable block (ram,0x02c1c514) */
/* WARNING: Removing unreachable block (ram,0x02c1c520) */
/* WARNING: Removing unreachable block (ram,0x02c1c524) */
/* WARNING: Removing unreachable block (ram,0x02c1c4b8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4c4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4c8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4e4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4e8) */
/* WARNING: Removing unreachable block (ram,0x02c1c4f4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4f8) */
/* WARNING: Removing unreachable block (ram,0x02c1c500) */
/* WARNING: Removing unreachable block (ram,0x02c1c504) */
/* WARNING: Removing unreachable block (ram,0x02c1c46c) */
/* WARNING: Removing unreachable block (ram,0x02c1c554) */
/* WARNING: Removing unreachable block (ram,0x02c1c560) */
/* WARNING: Removing unreachable block (ram,0x02c1c564) */
/* WARNING: Removing unreachable block (ram,0x02c1c57c) */
/* WARNING: Removing unreachable block (ram,0x02c1c580) */
/* WARNING: Removing unreachable block (ram,0x02c1c47c) */
/* WARNING: Removing unreachable block (ram,0x02c1c488) */
/* WARNING: Removing unreachable block (ram,0x02c1c48c) */
/* WARNING: Removing unreachable block (ram,0x02c1c4a4) */
/* WARNING: Removing unreachable block (ram,0x02c1c4a8) */
/* WARNING: Removing unreachable block (ram,0x02c1c430) */
/* WARNING: Removing unreachable block (ram,0x02c1c43c) */
/* WARNING: Removing unreachable block (ram,0x02c1c440) */
/* WARNING: Removing unreachable block (ram,0x02c1c458) */
/* WARNING: Removing unreachable block (ram,0x02c1c45c) */
/* WARNING: Removing unreachable block (ram,0x02c1c5e0) */
/* WARNING: Removing unreachable block (ram,0x02c1c5f8) */
/* WARNING: Removing unreachable block (ram,0x02c1c620) */
/* WARNING: Removing unreachable block (ram,0x02c1c644) */
/* WARNING: Removing unreachable block (ram,0x02c1c6e8) */
/* WARNING: Removing unreachable block (ram,0x02c1c650) */
/* WARNING: Removing unreachable block (ram,0x02c1c670) */
/* WARNING: Removing unreachable block (ram,0x02c1c688) */
/* WARNING: Removing unreachable block (ram,0x02c1c68c) */
/* WARNING: Removing unreachable block (ram,0x02c1c6ac) */
/* WARNING: Removing unreachable block (ram,0x02c1c6b0) */
/* WARNING: Removing unreachable block (ram,0x02c1c6c4) */
/* WARNING: Removing unreachable block (ram,0x02c1c6cc) */
/* WARNING: Removing unreachable block (ram,0x02c1c6d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c4776c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_02c1c6f0 + 0x2c1c304);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6f4 + 0x2c1c318),0);
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6f8 + 0x2c1c324));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c6fc + 0x2c1c330));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c700 + 0x2c1c33c));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c704 + 0x2c1c348));
    func_0x01438628(*(undefined4 *)(_UNK_02c1c708 + 0x2c1c354));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd50,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  func_0x024f1038(iVar2,**(undefined4 **)(_UNK_02c1c70c + 0x2c1c3b8),0);
  func_0x024f1038(iVar2,**(undefined4 **)(_UNK_02c1c710 + 0x2c1c3d0),0);
  func_0x024f1038(iVar2,**(undefined4 **)(_UNK_02c1c714 + 0x2c1c3e8),0);
  FUN_02c24960(iVar2);
  iVar2 = *(int *)(iVar2 + 0x34);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar2,0,0);
  return;
}

