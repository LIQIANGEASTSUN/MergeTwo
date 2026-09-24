
/* WARNING: Possible PIC construction at 0x02c1328c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c132c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c13394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c132c8) */
/* WARNING: Removing unreachable block (ram,0x02c132d4) */
/* WARNING: Removing unreachable block (ram,0x02c132d8) */
/* WARNING: Removing unreachable block (ram,0x02c132f0) */
/* WARNING: Removing unreachable block (ram,0x02c132f4) */
/* WARNING: Removing unreachable block (ram,0x02c13310) */
/* WARNING: Removing unreachable block (ram,0x02c13314) */
/* WARNING: Removing unreachable block (ram,0x02c1332c) */
/* WARNING: Removing unreachable block (ram,0x02c13330) */
/* WARNING: Removing unreachable block (ram,0x02c13348) */
/* WARNING: Removing unreachable block (ram,0x02c1334c) */
/* WARNING: Removing unreachable block (ram,0x02c13370) */
/* WARNING: Removing unreachable block (ram,0x02c13374) */
/* WARNING: Removing unreachable block (ram,0x02c13290) */
/* WARNING: Removing unreachable block (ram,0x02c13298) */
/* WARNING: Removing unreachable block (ram,0x02c1329c) */
/* WARNING: Removing unreachable block (ram,0x02c13398) */
/* WARNING: Removing unreachable block (ram,0x02c133a0) */
/* WARNING: Removing unreachable block (ram,0x02c133a4) */
/* WARNING: Removing unreachable block (ram,0x02c133c8) */
/* WARNING: Removing unreachable block (ram,0x02c133cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12eb8(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c133f0 + 0x2c12ed4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c133f4 + 0x2c12ee8));
    func_0x01438628(*(undefined4 *)(_UNK_02c133f8 + 0x2c12ef4));
    func_0x01438628(*(undefined4 *)(_UNK_02c133fc + 0x2c12f00));
    func_0x01438628(*(undefined4 *)(_UNK_02c13400 + 0x2c12f0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c13404 + 0x2c12f18));
    func_0x01438628(*(undefined4 *)(_UNK_02c13408 + 0x2c12f24));
    func_0x01438628(*(undefined4 *)(_UNK_02c1340c + 0x2c12f30));
    func_0x01438628(*(undefined4 *)(_UNK_02c13410 + 0x2c12f3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c13414 + 0x2c12f48));
    func_0x01438628(*(undefined4 *)(_UNK_02c13418 + 0x2c12f54));
    func_0x01438628(*(undefined4 *)(_UNK_02c1341c + 0x2c12f60));
    func_0x01438628(*(undefined4 *)(_UNK_02c13420 + 0x2c12f6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c13424 + 0x2c12f78));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fda,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fda,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x294),param_2,
                          **(undefined4 **)(_UNK_02c13428 + 0x2c12fdc));
  *(char *)(param_1 + 0x290) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c1342c + 0x2c13020);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c13430 + 0x2c13034);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c13434 + 0x2c13068) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c13438 + 0x2c13084));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c13440 + 0x2c130b8);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c1343c + 0x2c130ac),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c13444 + 0x2c13104));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c13448 + 0x2c13138);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c1344c + 0x2c1314c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c13450 + 0x2c13164);
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
    pcVar9 = (char *)(_UNK_02c13454 + 0x2c131bc);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c13458 + 0x2c131d0));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c1345c + 0x2c13278),0);
  puVar12 = (undefined4 *)(param_1 + 0x288);
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

