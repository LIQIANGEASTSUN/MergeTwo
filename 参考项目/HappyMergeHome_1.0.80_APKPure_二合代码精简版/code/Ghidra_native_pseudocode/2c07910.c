
/* WARNING: Possible PIC construction at 0x02c17ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c17d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c17dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c17d20) */
/* WARNING: Removing unreachable block (ram,0x02c17d2c) */
/* WARNING: Removing unreachable block (ram,0x02c17d30) */
/* WARNING: Removing unreachable block (ram,0x02c17d48) */
/* WARNING: Removing unreachable block (ram,0x02c17d4c) */
/* WARNING: Removing unreachable block (ram,0x02c17d68) */
/* WARNING: Removing unreachable block (ram,0x02c17d6c) */
/* WARNING: Removing unreachable block (ram,0x02c17d84) */
/* WARNING: Removing unreachable block (ram,0x02c17d88) */
/* WARNING: Removing unreachable block (ram,0x02c17da0) */
/* WARNING: Removing unreachable block (ram,0x02c17da4) */
/* WARNING: Removing unreachable block (ram,0x02c17dc8) */
/* WARNING: Removing unreachable block (ram,0x02c17dcc) */
/* WARNING: Removing unreachable block (ram,0x02c17ce8) */
/* WARNING: Removing unreachable block (ram,0x02c17cf0) */
/* WARNING: Removing unreachable block (ram,0x02c17cf4) */
/* WARNING: Removing unreachable block (ram,0x02c17df0) */
/* WARNING: Removing unreachable block (ram,0x02c17df8) */
/* WARNING: Removing unreachable block (ram,0x02c17dfc) */
/* WARNING: Removing unreachable block (ram,0x02c17e20) */
/* WARNING: Removing unreachable block (ram,0x02c17e24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17910(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c17e48 + 0x2c1792c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c17e4c + 0x2c17940));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e50 + 0x2c1794c));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e54 + 0x2c17958));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e58 + 0x2c17964));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e5c + 0x2c17970));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e60 + 0x2c1797c));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e64 + 0x2c17988));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e68 + 0x2c17994));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e6c + 0x2c179a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e70 + 0x2c179ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e74 + 0x2c179b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e78 + 0x2c179c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c17e7c + 0x2c179d0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe7,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe7,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x3fc),param_2,
                          **(undefined4 **)(_UNK_02c17e80 + 0x2c17a34));
  *(char *)(param_1 + 0x3f8) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c17e84 + 0x2c17a78);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c17e88 + 0x2c17a8c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c17e8c + 0x2c17ac0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c17e90 + 0x2c17adc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c17e98 + 0x2c17b10);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c17e94 + 0x2c17b04),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c17e9c + 0x2c17b5c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c17ea0 + 0x2c17b90);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c17ea4 + 0x2c17ba4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c17ea8 + 0x2c17bbc);
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
    pcVar9 = (char *)(_UNK_02c17eac + 0x2c17c14);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c17eb0 + 0x2c17c28));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c17eb4 + 0x2c17cd0),0);
  puVar12 = (undefined4 *)(param_1 + 0x3f0);
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

