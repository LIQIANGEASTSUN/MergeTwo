
/* WARNING: Possible PIC construction at 0x02c1496c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c149a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c14a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c149a8) */
/* WARNING: Removing unreachable block (ram,0x02c149b4) */
/* WARNING: Removing unreachable block (ram,0x02c149b8) */
/* WARNING: Removing unreachable block (ram,0x02c149d0) */
/* WARNING: Removing unreachable block (ram,0x02c149d4) */
/* WARNING: Removing unreachable block (ram,0x02c149f0) */
/* WARNING: Removing unreachable block (ram,0x02c149f4) */
/* WARNING: Removing unreachable block (ram,0x02c14a0c) */
/* WARNING: Removing unreachable block (ram,0x02c14a10) */
/* WARNING: Removing unreachable block (ram,0x02c14a28) */
/* WARNING: Removing unreachable block (ram,0x02c14a2c) */
/* WARNING: Removing unreachable block (ram,0x02c14a50) */
/* WARNING: Removing unreachable block (ram,0x02c14a54) */
/* WARNING: Removing unreachable block (ram,0x02c14970) */
/* WARNING: Removing unreachable block (ram,0x02c14978) */
/* WARNING: Removing unreachable block (ram,0x02c1497c) */
/* WARNING: Removing unreachable block (ram,0x02c14a78) */
/* WARNING: Removing unreachable block (ram,0x02c14a80) */
/* WARNING: Removing unreachable block (ram,0x02c14a84) */
/* WARNING: Removing unreachable block (ram,0x02c14aa8) */
/* WARNING: Removing unreachable block (ram,0x02c14aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c14598(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c14ad0 + 0x2c145b4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c14ad4 + 0x2c145c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c14ad8 + 0x2c145d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c14adc + 0x2c145e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c14ae0 + 0x2c145ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c14ae4 + 0x2c145f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c14ae8 + 0x2c14604));
    func_0x01438628(*(undefined4 *)(_UNK_02c14aec + 0x2c14610));
    func_0x01438628(*(undefined4 *)(_UNK_02c14af0 + 0x2c1461c));
    func_0x01438628(*(undefined4 *)(_UNK_02c14af4 + 0x2c14628));
    func_0x01438628(*(undefined4 *)(_UNK_02c14af8 + 0x2c14634));
    func_0x01438628(*(undefined4 *)(_UNK_02c14afc + 0x2c14640));
    func_0x01438628(*(undefined4 *)(_UNK_02c14b00 + 0x2c1464c));
    func_0x01438628(*(undefined4 *)(_UNK_02c14b04 + 0x2c14658));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fde,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fde,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x30c),param_2,
                          **(undefined4 **)(_UNK_02c14b08 + 0x2c146bc));
  *(char *)(param_1 + 0x308) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c14b0c + 0x2c14700);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c14b10 + 0x2c14714);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c14b14 + 0x2c14748) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c14b18 + 0x2c14764));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c14b20 + 0x2c14798);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c14b1c + 0x2c1478c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c14b24 + 0x2c147e4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c14b28 + 0x2c14818);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c14b2c + 0x2c1482c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c14b30 + 0x2c14844);
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
    pcVar9 = (char *)(_UNK_02c14b34 + 0x2c1489c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c14b38 + 0x2c148b0));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c14b3c + 0x2c14958),0);
  puVar12 = (undefined4 *)(param_1 + 0x300);
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

