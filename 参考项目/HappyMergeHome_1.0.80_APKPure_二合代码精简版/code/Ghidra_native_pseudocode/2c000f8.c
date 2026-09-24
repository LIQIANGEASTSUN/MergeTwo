
/* WARNING: Possible PIC construction at 0x02c104cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c10504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c105d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c10508) */
/* WARNING: Removing unreachable block (ram,0x02c10514) */
/* WARNING: Removing unreachable block (ram,0x02c10518) */
/* WARNING: Removing unreachable block (ram,0x02c10530) */
/* WARNING: Removing unreachable block (ram,0x02c10534) */
/* WARNING: Removing unreachable block (ram,0x02c10550) */
/* WARNING: Removing unreachable block (ram,0x02c10554) */
/* WARNING: Removing unreachable block (ram,0x02c1056c) */
/* WARNING: Removing unreachable block (ram,0x02c10570) */
/* WARNING: Removing unreachable block (ram,0x02c10588) */
/* WARNING: Removing unreachable block (ram,0x02c1058c) */
/* WARNING: Removing unreachable block (ram,0x02c105b0) */
/* WARNING: Removing unreachable block (ram,0x02c105b4) */
/* WARNING: Removing unreachable block (ram,0x02c104d0) */
/* WARNING: Removing unreachable block (ram,0x02c104d8) */
/* WARNING: Removing unreachable block (ram,0x02c104dc) */
/* WARNING: Removing unreachable block (ram,0x02c105d8) */
/* WARNING: Removing unreachable block (ram,0x02c105e0) */
/* WARNING: Removing unreachable block (ram,0x02c105e4) */
/* WARNING: Removing unreachable block (ram,0x02c10608) */
/* WARNING: Removing unreachable block (ram,0x02c1060c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c100f8(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
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
  
  pcVar9 = (char *)(_UNK_02c10630 + 0x2c10114);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c10634 + 0x2c10128));
    func_0x01438628(*(undefined4 *)(_UNK_02c10638 + 0x2c10134));
    func_0x01438628(*(undefined4 *)(_UNK_02c1063c + 0x2c10140));
    func_0x01438628(*(undefined4 *)(_UNK_02c10640 + 0x2c1014c));
    func_0x01438628(*(undefined4 *)(_UNK_02c10644 + 0x2c10158));
    func_0x01438628(*(undefined4 *)(_UNK_02c10648 + 0x2c10164));
    func_0x01438628(*(undefined4 *)(_UNK_02c1064c + 0x2c10170));
    func_0x01438628(*(undefined4 *)(_UNK_02c10650 + 0x2c1017c));
    func_0x01438628(*(undefined4 *)(_UNK_02c10654 + 0x2c10188));
    func_0x01438628(*(undefined4 *)(_UNK_02c10658 + 0x2c10194));
    func_0x01438628(*(undefined4 *)(_UNK_02c1065c + 0x2c101a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c10660 + 0x2c101ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c10664 + 0x2c101b8));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd2,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd2,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar6,0,0);
    return;
  }
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x1d4),param_2,
                          **(undefined4 **)(_UNK_02c10668 + 0x2c1021c));
  *(char *)(param_1 + 0x1d0) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c1066c + 0x2c10260);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c10670 + 0x2c10274);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c10674 + 0x2c102a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c10678 + 0x2c102c4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c10680 + 0x2c102f8);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c1067c + 0x2c102ec),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c10684 + 0x2c10344));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c10688 + 0x2c10378);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c1068c + 0x2c1038c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c10690 + 0x2c103a4);
    puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    uVar11 = puVar4[2];
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef1f8(iVar7,uVar6,uVar8,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c10694 + 0x2c103fc);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c10698 + 0x2c10410));
      *pcVar9 = '\x01';
    }
    iVar5 = *(int *)(*piVar10 + 0x5c);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar6 = *(undefined4 *)(iVar5 + 0x10);
    uVar11 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef328(iVar7,uVar8,uVar6,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
      func_0x024ef2f8(0,*puVar12,0);
      func_0x014388e4();
    }
    else {
      func_0x024ef2f8(iVar3,*puVar12,0);
    }
    iVar3 = func_0x024ef308(iVar3,0);
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c1069c + 0x2c104b8),0);
  puVar12 = (undefined4 *)(param_1 + 0x1c8);
  *puVar12 = uVar8;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar12 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar12 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

