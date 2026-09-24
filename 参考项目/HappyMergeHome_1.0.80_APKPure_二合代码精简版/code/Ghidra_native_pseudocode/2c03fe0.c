
/* WARNING: Possible PIC construction at 0x02c143b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c143ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c144bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c143f0) */
/* WARNING: Removing unreachable block (ram,0x02c143fc) */
/* WARNING: Removing unreachable block (ram,0x02c14400) */
/* WARNING: Removing unreachable block (ram,0x02c14418) */
/* WARNING: Removing unreachable block (ram,0x02c1441c) */
/* WARNING: Removing unreachable block (ram,0x02c14438) */
/* WARNING: Removing unreachable block (ram,0x02c1443c) */
/* WARNING: Removing unreachable block (ram,0x02c14454) */
/* WARNING: Removing unreachable block (ram,0x02c14458) */
/* WARNING: Removing unreachable block (ram,0x02c14470) */
/* WARNING: Removing unreachable block (ram,0x02c14474) */
/* WARNING: Removing unreachable block (ram,0x02c14498) */
/* WARNING: Removing unreachable block (ram,0x02c1449c) */
/* WARNING: Removing unreachable block (ram,0x02c143b8) */
/* WARNING: Removing unreachable block (ram,0x02c143c0) */
/* WARNING: Removing unreachable block (ram,0x02c143c4) */
/* WARNING: Removing unreachable block (ram,0x02c144c0) */
/* WARNING: Removing unreachable block (ram,0x02c144c8) */
/* WARNING: Removing unreachable block (ram,0x02c144cc) */
/* WARNING: Removing unreachable block (ram,0x02c144f0) */
/* WARNING: Removing unreachable block (ram,0x02c144f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13fe0(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c14518 + 0x2c13ffc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1451c + 0x2c14010));
    func_0x01438628(*(undefined4 *)(_UNK_02c14520 + 0x2c1401c));
    func_0x01438628(*(undefined4 *)(_UNK_02c14524 + 0x2c14028));
    func_0x01438628(*(undefined4 *)(_UNK_02c14528 + 0x2c14034));
    func_0x01438628(*(undefined4 *)(_UNK_02c1452c + 0x2c14040));
    func_0x01438628(*(undefined4 *)(_UNK_02c14530 + 0x2c1404c));
    func_0x01438628(*(undefined4 *)(_UNK_02c14534 + 0x2c14058));
    func_0x01438628(*(undefined4 *)(_UNK_02c14538 + 0x2c14064));
    func_0x01438628(*(undefined4 *)(_UNK_02c1453c + 0x2c14070));
    func_0x01438628(*(undefined4 *)(_UNK_02c14540 + 0x2c1407c));
    func_0x01438628(*(undefined4 *)(_UNK_02c14544 + 0x2c14088));
    func_0x01438628(*(undefined4 *)(_UNK_02c14548 + 0x2c14094));
    func_0x01438628(*(undefined4 *)(_UNK_02c1454c + 0x2c140a0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fdd,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fdd,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x2f4),param_2,
                          **(undefined4 **)(_UNK_02c14550 + 0x2c14104));
  *(char *)(param_1 + 0x2f0) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c14554 + 0x2c14148);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c14558 + 0x2c1415c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c1455c + 0x2c14190) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c14560 + 0x2c141ac));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c14568 + 0x2c141e0);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c14564 + 0x2c141d4),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c1456c + 0x2c1422c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c14570 + 0x2c14260);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c14574 + 0x2c14274));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c14578 + 0x2c1428c);
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
    pcVar9 = (char *)(_UNK_02c1457c + 0x2c142e4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c14580 + 0x2c142f8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c14584 + 0x2c143a0),0);
  puVar12 = (undefined4 *)(param_1 + 0x2e8);
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

