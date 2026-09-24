
/* WARNING: Possible PIC construction at 0x02be9f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02be9fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02bea060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bea008) */
/* WARNING: Removing unreachable block (ram,0x02bea014) */
/* WARNING: Removing unreachable block (ram,0x02bea018) */
/* WARNING: Removing unreachable block (ram,0x02be9fac) */
/* WARNING: Removing unreachable block (ram,0x02be9fb8) */
/* WARNING: Removing unreachable block (ram,0x02be9fbc) */
/* WARNING: Removing unreachable block (ram,0x02be9f50) */
/* WARNING: Removing unreachable block (ram,0x02be9f5c) */
/* WARNING: Removing unreachable block (ram,0x02be9f60) */
/* WARNING: Removing unreachable block (ram,0x02bea064) */
/* WARNING: Removing unreachable block (ram,0x02bea070) */
/* WARNING: Removing unreachable block (ram,0x02bea074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be9e00(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  
  pcVar8 = (char *)(_UNK_02bea0c4 + 0x2be9e14);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bea0c8 + 0x2be9e28));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0cc + 0x2be9e34));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0d0 + 0x2be9e40));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0d4 + 0x2be9e4c));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0d8 + 0x2be9e58));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0dc + 0x2be9e64));
    func_0x01438628(*(undefined4 *)(_UNK_02bea0e0 + 0x2be9e70));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5d4a,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5d4a,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_24 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    puStack_24 = (undefined4 *)uStack_3c;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar9,&iStack_30,uVar5,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  func_0x02bfae2c(param_1,*(undefined4 *)(param_1 + 0x14));
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x014e94d8(iVar3,0);
  puVar11 = *(undefined4 **)(_UNK_02bea0e4 + 0x2be9efc);
  uVar5 = func_0x014388d4(*puVar11);
  func_0x03de8c78(uVar5,param_1,**(undefined4 **)(_UNK_02bea0e8 + 0x2be9f18),0);
  if (*(int *)(**(int **)(_UNK_02bea0ec + 0x2be9f2c) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar8 = (char *)(_UNK_02af30d0 + 0x2af2f30);
  iStack_30 = param_1;
  uStack_2c = uVar9;
  uStack_28 = uVar5;
  puStack_24 = puVar11;
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02af30d4 + 0x2af2f44),2,uVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_02af30d8 + 0x2af2f50));
    func_0x01438628(*(undefined4 *)(_UNK_02af30dc + 0x2af2f5c));
    func_0x01438628(*(undefined4 *)(_UNK_02af30e0 + 0x2af2f68));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5825,0);
  if (iVar3 == 0) {
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02af30e4 + 0x2af2fd0));
    func_0x024f5dc0(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 8) = 2;
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x03df0c34(iVar6,uVar5,**(undefined4 **)(_UNK_02af30e8 + 0x2af3010));
    iVar6 = func_0x0363b5e8(uVar9,**(undefined4 **)(_UNK_02af30ec + 0x2af3024));
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024f5dd0(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar6 + 8);
    uVar10 = *(uint *)(iVar6 + 0xc);
    piVar4 = *(int **)(_UNK_02af30f0 + 0x2af3078);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    iVar12 = *piVar4;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar10) {
      (*(code *)&SUB_04cfda38)
                (iVar6,iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
      return;
    }
    *(uint *)(iVar6 + 0xc) = uVar10 + 1;
    piVar4 = (int *)(iVar7 + uVar10 * 4 + 0x10);
    *piVar4 = iVar3;
    if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
      puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar4 >> 0x11) * 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  iVar3 = func_0x029540a4(0x5825,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_38 = 0;
  func_0x028f1920(iVar3,uVar9,2,uVar5);
  return;
}

