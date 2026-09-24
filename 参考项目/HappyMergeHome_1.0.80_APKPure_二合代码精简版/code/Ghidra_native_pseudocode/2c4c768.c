
/* WARNING: Possible PIC construction at 0x02b8f9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b92d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b8f9e8) */
/* WARNING: Removing unreachable block (ram,0x02b92d9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c5c768(int param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  int unaff_r5;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 unaff_r6;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 unaff_r7;
  int iVar13;
  undefined8 **unaff_r8;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined *unaff_lr;
  undefined8 *puStack_88;
  int iStack_84;
  undefined8 *puStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  int iStack_74;
  undefined8 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 *puStack_50;
  int iStack_4c;
  undefined8 *puStack_48;
  undefined4 uStack_44;
  undefined8 *puStack_40;
  int *piStack_3c;
  undefined8 *puStack_38;
  undefined8 **ppuStack_34;
  undefined8 uStack_30;
  undefined8 *puStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_02c5cc68 + 0x2c5c780);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc6c + 0x2c5c794));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc70 + 0x2c5c7a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc74 + 0x2c5c7ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc78 + 0x2c5c7b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc7c + 0x2c5c7c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc80 + 0x2c5c7d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc84 + 0x2c5c7dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc88 + 0x2c5c7e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc8c + 0x2c5c7f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc90 + 0x2c5c800));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc94 + 0x2c5c80c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5cc98 + 0x2c5c818));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5c5d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5c5d,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    goto SUB_02868e1c;
  }
  uVar2 = *(uint *)(param_1 + 0x3c);
  if (0xf < uVar2) {
    return uVar2;
  }
  uVar4 = *(uint *)(&UNK_02c5c880 + uVar2 * 4);
  switch(uVar2) {
  case 0:
    if (*(int *)(**(int **)(&UNK_02c5c974 + _UNK_02c5cc9c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(&UNK_02c5c990 + _UNK_02c5cca0));
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    uVar9 = FUN_02c59e5c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puStack_38 = (undefined8 *)0x0;
    iVar3 = FUN_02bdd790(iVar3,uVar7,uVar9,0);
    if (iVar3 != -1) {
      pcVar8 = &UNK_02c5ccf4 + _UNK_02c5d5fc;
      iStack_24 = unaff_r4;
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd08 + _UNK_02c5d600));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd14 + _UNK_02c5d604));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd20 + _UNK_02c5d608));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd2c + _UNK_02c5d60c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd38 + _UNK_02c5d610));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd44 + _UNK_02c5d614));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd50 + _UNK_02c5d618));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd5c + _UNK_02c5d61c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd68 + _UNK_02c5d620));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd74 + _UNK_02c5d624));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd80 + _UNK_02c5d628));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd8c + _UNK_02c5d62c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cd98 + _UNK_02c5d630));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cda4 + _UNK_02c5d634));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdb0 + _UNK_02c5d638));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdbc + _UNK_02c5d63c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdc8 + _UNK_02c5d640));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdd4 + _UNK_02c5d644));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cde0 + _UNK_02c5d648));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdec + _UNK_02c5d64c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5cdf8 + _UNK_02c5d650));
        *pcVar8 = '\x01';
      }
      iVar6 = func_0x02953fd4(0x5c5f,0);
      if (iVar6 == 0) {
        uVar2 = 0;
        if (iVar3 != -1) {
          if (*(int *)(**(int **)(&UNK_02c5ce60 + _UNK_02c5d654) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5ce7c + _UNK_02c5d658));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x0202998c(iVar6,0xd,0,0);
          iVar5 = **(int **)(**(int **)(&UNK_02c5ceb4 + _UNK_02c5d65c) + 0x5c);
          iVar6 = func_0x024eecb8(param_1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024eff78(iVar6,0);
          iVar12 = func_0x024eecb8(param_1,0);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          func_0x024f0474(&uStack_30,iVar12,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          puStack_60 = puStack_28;
          uStack_5c = 0;
          func_0x024f17b4(&puStack_40,iVar6,(uint)uStack_30,uStack_30._4_4_);
          uStack_30 = CONCAT44(piStack_3c,puStack_40);
          puStack_28 = puStack_38;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar6 = **(int **)(&UNK_02c5cf6c + _UNK_02c5d660);
          *(undefined8 **)(iVar5 + 0x94) = puStack_28;
          *(ulonglong *)(iVar5 + 0x8c) = uStack_30;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5cf98 + _UNK_02c5d664));
          piVar10 = *(int **)(&UNK_02c5cfac + _UNK_02c5d668);
          iVar5 = *piVar10;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x014387a4();
            iVar5 = *piVar10;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
          piVar10 = (int *)func_0x014386f0(**(undefined4 **)(&UNK_02c5cfd0 + _UNK_02c5d66c),2);
          pcVar8 = &UNK_02c5cfec + _UNK_02c5d670;
          if (*pcVar8 == '\0') {
            func_0x01438628(*(undefined4 *)(&UNK_02c5d000 + _UNK_02c5d674));
            *pcVar8 = '\x01';
          }
          puVar14 = *(undefined4 **)(**(int **)(&UNK_02c5d014 + _UNK_02c5d678) + 0x5c);
          puStack_40 = (undefined8 *)*puVar14;
          piStack_3c = (int *)puVar14[1];
          iVar5 = func_0x014387ac(**(int **)(&UNK_02c5d014 + _UNK_02c5d678),&puStack_40);
          if (piVar10 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar5 != 0) &&
             (iVar12 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if (piVar10[3] == 0) {
            func_0x014388e8();
          }
          piVar10[4] = iVar5;
          func_0x014385cc(piVar10 + 4,iVar5);
          uStack_44 = FUN_02c59e5c(param_1);
          iVar5 = func_0x014387ac(**(undefined4 **)(&UNK_02c5d0a0 + _UNK_02c5d67c),&uStack_44);
          if ((iVar5 != 0) &&
             (iVar12 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 2) {
            func_0x014388e8();
          }
          piVar10[5] = iVar5;
          func_0x014385cc(piVar10 + 5,iVar5);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar6,uVar9,piVar10,0);
          iVar6 = func_0x024eecb8(param_1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x024f5ff0(iVar6,0);
          if (*(int *)(**(int **)(&UNK_02c5d158 + _UNK_02c5d680) + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar14 = *(undefined4 **)(&UNK_02c5d174 + _UNK_02c5d684);
          iVar6 = func_0x014e9518(*puVar14);
          uVar7 = FUN_02c59e5c(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bd7f00(iVar6,uVar9,uVar7,0);
          iVar5 = func_0x014e9518(*puVar14);
          uVar7 = FUN_02c59e5c(param_1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          puStack_60 = (undefined8 *)0x0;
          FUN_02bdff00(iVar5,uVar9,iVar3,uVar7);
          iVar5 = **(int **)(**(int **)(&UNK_02c5d1f8 + _UNK_02c5d688) + 0x5c);
          puVar14 = *(undefined4 **)(&UNK_02c5d210 + _UNK_02c5d68c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02b91504(iVar5,uVar9,0);
          iVar5 = func_0x014e9518(*puVar14);
          uVar9 = *(undefined4 *)(*(int *)(**(int **)(&UNK_02c5d23c + _UNK_02c5d690) + 0x5c) + 8);
          piVar10 = (int *)func_0x014386f0(**(undefined4 **)(&UNK_02c5d24c + _UNK_02c5d694),5);
          puStack_48 = (undefined8 *)FUN_02c59e5c(param_1);
          iVar12 = func_0x014387ac(**(undefined4 **)(&UNK_02c5d270 + _UNK_02c5d698),&puStack_48);
          if (piVar10 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if (piVar10[3] == 0) {
            func_0x014388e8();
          }
          piVar10[4] = iVar12;
          func_0x014385cc(piVar10 + 4,iVar12);
          puVar14 = *(undefined4 **)(&UNK_02c5d2ec + _UNK_02c5d69c);
          iStack_4c = iVar3;
          iVar12 = func_0x014387ac(*puVar14,&iStack_4c);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 2) {
            func_0x014388e8();
          }
          piVar10[5] = iVar12;
          func_0x014385cc(piVar10 + 5,iVar12);
          puStack_50 = (undefined8 *)0xffffffff;
          iVar12 = func_0x014387ac(*puVar14,&puStack_50);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 3) {
            func_0x014388e8();
          }
          piVar10[6] = iVar12;
          func_0x014385cc(piVar10 + 6,iVar12);
          iStack_54 = 6;
          iVar12 = func_0x014387ac(**(undefined4 **)(&UNK_02c5d3b8 + _UNK_02c5d6a0),&iStack_54);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 4) {
            func_0x014388e8();
          }
          piVar10[7] = iVar12;
          func_0x014385cc(piVar10 + 7,iVar12);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_58 = *(undefined4 *)(iVar6 + 8);
          iVar6 = func_0x014387ac(*puVar14,&uStack_58);
          if ((iVar6 != 0) &&
             (iVar12 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 5) {
            func_0x014388e8();
          }
          piVar10[8] = iVar6;
          func_0x014385cc(piVar10 + 8,iVar6);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar5,uVar9,piVar10,0);
          if (*(int *)(**(int **)(&UNK_02c5d4b0 + _UNK_02c5d6a4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5d4cc + _UNK_02c5d6a8));
          piVar10 = *(int **)(&UNK_02c5d4e0 + _UNK_02c5d6ac);
          iVar5 = *piVar10;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x014387a4();
            iVar5 = *piVar10;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x160);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x0374c388(iVar6,uVar9,**(undefined4 **)(&UNK_02c5d518 + _UNK_02c5d6b0));
          if (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 0x58);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar6 + 8);
            uVar2 = *(uint *)(iVar6 + 0xc);
            piVar10 = *(int **)(&UNK_02c5d558 + _UNK_02c5d6b4);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar12 = *piVar10;
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (uVar2 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar2 + 1;
              *(int *)(iVar5 + uVar2 * 4 + 0x10) = iVar3;
            }
            else {
              func_0x024f0520(iVar6,iVar3,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          if (*(int *)(**(int **)(&UNK_02c5d5a8 + _UNK_02c5d6b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x03b2c734(**(undefined4 **)(&UNK_02c5d5c4 + _UNK_02c5d6bc));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          puStack_60 = (undefined8 *)0x0;
          uVar2 = FUN_02c3e4a4(iVar3,2,0,0);
        }
        return uVar2;
      }
      iVar6 = func_0x029540a4(0x5c5f,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
SUB_0286c2b8:
      iStack_20 = iStack_24;
      ppuStack_34 = *(undefined8 ***)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      puStack_38 = (undefined8 *)0x0;
      uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
      puStack_28 = (undefined8 *)0x0;
      func_0x024f56c0(&puStack_50,0,iVar3,0);
      puStack_38 = puStack_50;
      ppuStack_34 = (undefined8 **)iStack_4c;
      puStack_28 = puStack_40;
      if (*(int *)(iVar6 + 0x10) != 0) {
        func_0x01523a6c(&puStack_38,*(int *)(iVar6 + 0x10),0);
      }
      func_0x01523a6c(&puStack_38,param_1,0);
      func_0x01523a2c(&puStack_38,iVar3,0);
      iVar5 = *(int *)(iVar6 + 8);
      uVar9 = *(undefined4 *)(iVar6 + 0xc);
      iVar3 = *(int *)(iVar6 + 0x10);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = 3;
      if (iVar3 == 0) {
        uVar7 = 2;
      }
      uStack_58 = 0;
      iStack_54 = 0;
      uVar2 = func_0x024f56d0(iVar5,uVar9,&puStack_38,uVar7);
      return uVar2;
    }
    break;
  case 1:
    param_1 = **(int **)(**(int **)(&UNK_02c5c9f8 + _UNK_02c5ccb4) + 0x5c);
    if (param_1 == 0) {
      func_0x014388e4();
    }
    unaff_r8 = &puStack_50;
    pcVar8 = &UNK_02b92ca0 + _UNK_02b93300;
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(&UNK_02b92cb4 + _UNK_02b93304),0);
      func_0x01438628(*(undefined4 *)(&UNK_02b92cc0 + _UNK_02b93308));
      func_0x01438628(*(undefined4 *)(&UNK_02b92ccc + _UNK_02b9330c));
      func_0x01438628(*(undefined4 *)(&UNK_02b92cd8 + _UNK_02b93310));
      func_0x01438628(*(undefined4 *)(&UNK_02b92ce4 + _UNK_02b93314));
      func_0x01438628(*(undefined4 *)(&UNK_02b92cf0 + _UNK_02b93318));
      func_0x01438628(*(undefined4 *)(&UNK_02b92cfc + _UNK_02b9331c));
      func_0x01438628(*(undefined4 *)(&UNK_02b92d08 + _UNK_02b93320));
      func_0x01438628(*(undefined4 *)(&UNK_02b92d14 + _UNK_02b93324));
      func_0x01438628(*(undefined4 *)(&UNK_02b92d20 + _UNK_02b93328));
      func_0x01438628(*(undefined4 *)(&UNK_02b92d2c + _UNK_02b9332c));
      func_0x01438628(*(undefined4 *)(&UNK_02b92d38 + _UNK_02b93330));
      *pcVar8 = '\x01';
    }
    iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_48 = *(undefined8 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_28 = (undefined8 *)0x0;
    uStack_30 = (ulonglong)(uint)uStack_30;
    puStack_50 = (undefined8 *)0x0;
    puStack_40 = (undefined8 *)0x0;
    piStack_3c = (int *)iStack_4c;
    puStack_38 = puStack_48;
    ppuStack_34 = (undefined8 **)uStack_44;
    iVar3 = func_0x02953fd4(0x5c6e,0);
    if (iVar3 == 0) {
      piVar10 = *(int **)(&UNK_02b92dac + _UNK_02b93334);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar14 = *(undefined4 **)(&UNK_02b92dc8 + _UNK_02b93338);
      iVar3 = func_0x014e9518(*puVar14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_02bad050(iVar3,0,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(uint *)(param_1 + 0x34);
      if (*(int *)(iVar3 + 0x18) < (int)uVar2) {
        if (*(int *)(**(int **)(&UNK_02b92e18 + _UNK_02b9333c) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(&UNK_02b92e34 + _UNK_02b93340);
        iVar3 = func_0x014e9518(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x28);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = FUN_02bad050(iVar6,0,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar6 + 0x18);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puVar15 = *(undefined4 **)(&UNK_02b92ebc + _UNK_02b93344);
        iVar3 = func_0x0152983c(iVar3,uVar9,*puVar15);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x10);
        iVar3 = func_0x014e9518(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar3 + 0x28);
        iVar3 = func_0x014e9518(*puVar14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02bad050(iVar3,0,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x18);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0152983c(iVar6,uVar7,*puVar15);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        piVar16 = *(int **)(&UNK_02b92f64 + _UNK_02b93348);
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = **(int **)(*piVar16 + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puStack_88 = (undefined8 *)0x0;
        iVar3 = func_0x02e61e94(iVar3,uVar7,uVar9,&puStack_28);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(&UNK_02b93168 + _UNK_02b9334c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x03b2c734(**(undefined4 **)(&UNK_02b93184 + _UNK_02b93350));
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(*puVar14);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bad050(iVar6,0,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_30 = CONCAT44(*(undefined4 *)(iVar6 + 0x18),(uint)uStack_30);
          uVar9 = func_0x01524ffc((int)&uStack_30 + 4,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          puStack_88 = (undefined8 *)**(undefined4 **)(&UNK_02b93220 + _UNK_02b93358);
          iStack_84 = 1;
          puStack_80 = (undefined8 *)0x0;
          uVar2 = func_0x029bca2c(iVar3,uVar7,**(undefined4 **)(&UNK_02b93214 + _UNK_02b93354),uVar9
                                 );
        }
        else {
          iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          puStack_48 = *(undefined8 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puStack_40 = (undefined8 *)0x0;
          puStack_50 = (undefined8 *)0xd;
          piStack_3c = (int *)iStack_4c;
          puStack_38 = puStack_48;
          ppuStack_34 = (undefined8 **)uStack_44;
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_5c = uVar9;
          iVar3 = func_0x014e9518(*puVar14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_58 = uVar7;
          iStack_54 = param_1;
          iVar3 = FUN_02bad050(iVar3,0,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_30 = CONCAT44(*(int *)(iVar3 + 0x18) + 1,(uint)uStack_30);
          iStack_4c = func_0x01524ffc((int)&uStack_30 + 4,0);
          func_0x014385cc((uint)unaff_r8 | 4,iStack_4c);
          puStack_70 = puStack_38;
          iStack_74 = (int)piStack_3c;
          puStack_78 = puStack_40;
          uStack_7c = uStack_44;
          puStack_80 = puStack_48;
          iStack_84 = iStack_4c;
          puVar1 = puStack_50;
          iVar3 = **(int **)(*piVar16 + 0x5c);
          uStack_6c = ppuStack_34;
          if (iVar3 == 0) {
            puStack_60 = (undefined8 *)ppuStack_34;
            func_0x014388e4();
            uStack_6c = (undefined8 **)puStack_60;
          }
          uStack_68 = 0;
          uStack_64 = 0;
          puStack_88 = puVar1;
          func_0x02e62afc(iVar3,uStack_58,uStack_5c);
          iVar3 = iStack_54;
          func_0x02b8ffb0(iStack_54);
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02b930bc + _UNK_02b9335c));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bad050(iVar6,0,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          FUN_026f6014(iVar6,*(int *)(iVar6 + 0x18) + 1,0);
          iVar6 = func_0x02b924b0(iVar3);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x014e94d8(iVar6,0);
          iVar6 = func_0x03633c3c(uVar9,0,**(undefined4 **)(&UNK_02b93134 + _UNK_02b93360));
          if (iVar6 == 0) {
            func_0x014388e4();
            FUN_02c59f34(0,0,0);
            func_0x014388e4();
          }
          else {
            FUN_02c59f34(iVar6,0,0);
          }
          puStack_88 = (undefined8 *)0x0;
          iStack_84 = 0;
          puStack_80 = (undefined8 *)0x0;
          FUN_02c5a5ec(iVar6,0,0xffffffff,2);
          iVar5 = *(int *)(iVar3 + 0x3c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar12 = *(int *)(iVar5 + 8);
          uVar2 = *(uint *)(iVar5 + 0xc);
          piVar10 = *(int **)(&UNK_02b932a0 + _UNK_02b93364);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar13 = *piVar10;
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          if (uVar2 < *(uint *)(iVar12 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar2 + 1;
            piVar10 = (int *)(iVar12 + uVar2 * 4 + 0x10);
            *piVar10 = iVar6;
            func_0x014385cc(piVar10,iVar6);
          }
          else {
            func_0x0152874c(iVar5,iVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          uVar2 = func_0x02b91504(iVar3,0);
        }
      }
      return uVar2;
    }
    iVar3 = func_0x029540a4(0x5c6e,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    unaff_lr = &UNK_02b92d9c;
    unaff_r4 = param_1;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&puStack_88;
    goto SUB_02868e1c;
  default:
    goto LAB_02c5cc60;
  case 4:
    if (*(int *)(**(int **)(&UNK_02c5ca2c + _UNK_02c5ccac) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(&UNK_02c5ca48 + _UNK_02c5ccb0));
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    uVar9 = FUN_02c59e5c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puStack_38 = (undefined8 *)0x0;
    iVar3 = FUN_02bdd790(iVar3,uVar7,uVar9,0);
    if (iVar3 != -1) {
      pcVar8 = &UNK_02c5d6dc + _UNK_02c5dfe0;
      iStack_24 = unaff_r4;
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(&UNK_02c5d6f0 + _UNK_02c5dfe4));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d6fc + _UNK_02c5dfe8));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d708 + _UNK_02c5dfec));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d714 + _UNK_02c5dff0));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d720 + _UNK_02c5dff4));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d72c + _UNK_02c5dff8));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d738 + _UNK_02c5dffc));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d744 + _UNK_02c5e000));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d750 + _UNK_02c5e004));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d75c + _UNK_02c5e008));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d768 + _UNK_02c5e00c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d774 + _UNK_02c5e010));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d780 + _UNK_02c5e014));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d78c + _UNK_02c5e018));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d798 + _UNK_02c5e01c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7a4 + _UNK_02c5e020));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7b0 + _UNK_02c5e024));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7bc + _UNK_02c5e028));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7c8 + _UNK_02c5e02c));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7d4 + _UNK_02c5e030));
        func_0x01438628(*(undefined4 *)(&UNK_02c5d7e0 + _UNK_02c5e034));
        *pcVar8 = '\x01';
      }
      iVar6 = func_0x02953fd4(0x5c6c,0);
      if (iVar6 == 0) {
        uVar2 = 0;
        if (iVar3 != -1) {
          if (*(int *)(**(int **)(&UNK_02c5d848 + _UNK_02c5e038) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5d864 + _UNK_02c5e03c));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x0202998c(iVar6,0xd,0,0);
          iVar5 = **(int **)(**(int **)(&UNK_02c5d89c + _UNK_02c5e040) + 0x5c);
          iVar6 = func_0x024eecb8(param_1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024eff78(iVar6,0);
          iVar12 = func_0x024eecb8(param_1,0);
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          func_0x024f0474(&uStack_30,iVar12,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          puStack_60 = puStack_28;
          uStack_5c = 0;
          func_0x024f17b4(&puStack_40,iVar6,(uint)uStack_30,uStack_30._4_4_);
          uStack_30 = CONCAT44(piStack_3c,puStack_40);
          puStack_28 = puStack_38;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar6 = **(int **)(&UNK_02c5d954 + _UNK_02c5e044);
          *(undefined8 **)(iVar5 + 0x94) = puStack_28;
          *(ulonglong *)(iVar5 + 0x8c) = uStack_30;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5d980 + _UNK_02c5e048));
          piVar10 = *(int **)(&UNK_02c5d994 + _UNK_02c5e04c);
          iVar5 = *piVar10;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x014387a4();
            iVar5 = *piVar10;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
          piVar10 = (int *)func_0x014386f0(**(undefined4 **)(&UNK_02c5d9b8 + _UNK_02c5e050),2);
          pcVar8 = &UNK_02c5d9d4 + _UNK_02c5e054;
          if (*pcVar8 == '\0') {
            func_0x01438628(*(undefined4 *)(&UNK_02c5d9e8 + _UNK_02c5e058));
            *pcVar8 = '\x01';
          }
          puVar14 = *(undefined4 **)(**(int **)(&UNK_02c5d9fc + _UNK_02c5e05c) + 0x5c);
          puStack_40 = (undefined8 *)*puVar14;
          piStack_3c = (int *)puVar14[1];
          iVar5 = func_0x014387ac(**(int **)(&UNK_02c5d9fc + _UNK_02c5e05c),&puStack_40);
          if (piVar10 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar5 != 0) &&
             (iVar12 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if (piVar10[3] == 0) {
            func_0x014388e8();
          }
          piVar10[4] = iVar5;
          func_0x014385cc(piVar10 + 4,iVar5);
          uStack_44 = FUN_02c59e5c(param_1);
          iVar5 = func_0x014387ac(**(undefined4 **)(&UNK_02c5da88 + _UNK_02c5e060),&uStack_44);
          if ((iVar5 != 0) &&
             (iVar12 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 2) {
            func_0x014388e8();
          }
          piVar10[5] = iVar5;
          func_0x014385cc(piVar10 + 5,iVar5);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar6,uVar9,piVar10,0);
          iVar6 = func_0x024eecb8(param_1,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x024f5ff0(iVar6,0);
          if (*(int *)(**(int **)(&UNK_02c5db40 + _UNK_02c5e064) + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar14 = *(undefined4 **)(&UNK_02c5db5c + _UNK_02c5e068);
          iVar6 = func_0x014e9518(*puVar14);
          uVar7 = FUN_02c59e5c(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bdf4e4(iVar6,uVar9,uVar7,0);
          iVar5 = func_0x014e9518(*puVar14);
          uVar7 = FUN_02c59e5c(param_1);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          puStack_60 = (undefined8 *)0x0;
          FUN_02be0904(iVar5,uVar9,iVar3,uVar7);
          iVar5 = **(int **)(**(int **)(&UNK_02c5dbe0 + _UNK_02c5e06c) + 0x5c);
          puVar14 = *(undefined4 **)(&UNK_02c5dbf8 + _UNK_02c5e070);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02b8ebd4(iVar5,0);
          iVar5 = func_0x014e9518(*puVar14);
          uVar9 = *(undefined4 *)(*(int *)(**(int **)(&UNK_02c5dc20 + _UNK_02c5e074) + 0x5c) + 8);
          piVar10 = (int *)func_0x014386f0(**(undefined4 **)(&UNK_02c5dc30 + _UNK_02c5e078),5);
          puStack_48 = (undefined8 *)FUN_02c59e5c(param_1);
          iVar12 = func_0x014387ac(**(undefined4 **)(&UNK_02c5dc54 + _UNK_02c5e07c),&puStack_48);
          if (piVar10 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if (piVar10[3] == 0) {
            func_0x014388e8();
          }
          piVar10[4] = iVar12;
          func_0x014385cc(piVar10 + 4,iVar12);
          puVar14 = *(undefined4 **)(&UNK_02c5dcd0 + _UNK_02c5e080);
          iStack_4c = iVar3;
          iVar12 = func_0x014387ac(*puVar14,&iStack_4c);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 2) {
            func_0x014388e8();
          }
          piVar10[5] = iVar12;
          func_0x014385cc(piVar10 + 5,iVar12);
          puStack_50 = (undefined8 *)0xffffffff;
          iVar12 = func_0x014387ac(*puVar14,&puStack_50);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 3) {
            func_0x014388e8();
          }
          piVar10[6] = iVar12;
          func_0x014385cc(piVar10 + 6,iVar12);
          iStack_54 = 6;
          iVar12 = func_0x014387ac(**(undefined4 **)(&UNK_02c5dd9c + _UNK_02c5e084),&iStack_54);
          if ((iVar12 != 0) &&
             (iVar13 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 4) {
            func_0x014388e8();
          }
          piVar10[7] = iVar12;
          func_0x014385cc(piVar10 + 7,iVar12);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_58 = *(undefined4 *)(iVar6 + 8);
          iVar6 = func_0x014387ac(*puVar14,&uStack_58);
          if ((iVar6 != 0) &&
             (iVar12 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar10 + 0x20)), iVar12 == 0)) {
            uVar7 = func_0x01438904();
            func_0x01438790(uVar7,0);
          }
          if ((uint)piVar10[3] < 5) {
            func_0x014388e8();
          }
          piVar10[8] = iVar6;
          func_0x014385cc(piVar10 + 8,iVar6);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02990414(iVar5,uVar9,piVar10,0);
          if (*(int *)(**(int **)(&UNK_02c5de94 + _UNK_02c5e088) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02c5deb0 + _UNK_02c5e08c));
          piVar10 = *(int **)(&UNK_02c5dec4 + _UNK_02c5e090);
          iVar5 = *piVar10;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x014387a4();
            iVar5 = *piVar10;
          }
          uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x160);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x0374c388(iVar6,uVar9,**(undefined4 **)(&UNK_02c5defc + _UNK_02c5e094));
          if (iVar6 != 0) {
            iVar6 = *(int *)(iVar6 + 0x58);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar6 + 8);
            uVar2 = *(uint *)(iVar6 + 0xc);
            piVar10 = *(int **)(&UNK_02c5df3c + _UNK_02c5e098);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar12 = *piVar10;
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if (uVar2 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar2 + 1;
              *(int *)(iVar5 + uVar2 * 4 + 0x10) = iVar3;
            }
            else {
              func_0x024f0520(iVar6,iVar3,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          if (*(int *)(**(int **)(&UNK_02c5df8c + _UNK_02c5e09c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x03b2c734(**(undefined4 **)(&UNK_02c5dfa8 + _UNK_02c5e0a0));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          puStack_60 = (undefined8 *)0x0;
          uVar2 = FUN_02c3e4a4(iVar3,2,0,0);
        }
        return uVar2;
      }
      iVar6 = func_0x029540a4(0x5c6c,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      goto SUB_0286c2b8;
    }
    break;
  case 5:
    param_1 = **(int **)(**(int **)(&UNK_02c5cab0 + _UNK_02c5ccb8) + 0x5c);
    if (param_1 == 0) {
      func_0x014388e4();
    }
    unaff_r8 = &puStack_50;
    pcVar8 = &UNK_02b8f8ec + _UNK_02b8ff48;
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(&UNK_02b8f900 + _UNK_02b8ff4c),0);
      func_0x01438628(*(undefined4 *)(&UNK_02b8f90c + _UNK_02b8ff50));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f918 + _UNK_02b8ff54));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f924 + _UNK_02b8ff58));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f930 + _UNK_02b8ff5c));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f93c + _UNK_02b8ff60));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f948 + _UNK_02b8ff64));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f954 + _UNK_02b8ff68));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f960 + _UNK_02b8ff6c));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f96c + _UNK_02b8ff70));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f978 + _UNK_02b8ff74));
      func_0x01438628(*(undefined4 *)(&UNK_02b8f984 + _UNK_02b8ff78));
      *pcVar8 = '\x01';
    }
    iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_48 = *(undefined8 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_28 = (undefined8 *)0x0;
    uStack_30 = (ulonglong)(uint)uStack_30;
    puStack_50 = (undefined8 *)0x0;
    puStack_40 = (undefined8 *)0x0;
    piStack_3c = (int *)iStack_4c;
    puStack_38 = puStack_48;
    ppuStack_34 = (undefined8 **)uStack_44;
    iVar3 = func_0x02953fd4(0x5c71,0);
    if (iVar3 == 0) {
      piVar10 = *(int **)(&UNK_02b8f9f8 + _UNK_02b8ff7c);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar14 = *(undefined4 **)(&UNK_02b8fa14 + _UNK_02b8ff80);
      iVar3 = func_0x014e9518(*puVar14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = FUN_02bad050(iVar3,0,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = *(uint *)(param_1 + 0x38);
      if (*(int *)(iVar3 + 0x50) < (int)uVar2) {
        if (*(int *)(**(int **)(&UNK_02b8fa64 + _UNK_02b8ff84) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(&UNK_02b8fa80 + _UNK_02b8ff88);
        iVar3 = func_0x014e9518(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x2c);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x014e9518(*puVar14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = FUN_02bad050(iVar6,0,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar6 + 0x50);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puVar15 = *(undefined4 **)(&UNK_02b8fb08 + _UNK_02b8ff8c);
        iVar3 = func_0x0152983c(iVar3,uVar9,*puVar15);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar9 = *(undefined4 *)(iVar3 + 0x10);
        iVar3 = func_0x014e9518(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar3 + 0x2c);
        iVar3 = func_0x014e9518(*puVar14);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = FUN_02bad050(iVar3,0,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar3 + 0x50);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0152983c(iVar6,uVar7,*puVar15);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        piVar16 = *(int **)(&UNK_02b8fbb0 + _UNK_02b8ff90);
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = **(int **)(*piVar16 + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puStack_88 = (undefined8 *)0x0;
        iVar3 = func_0x02e61e94(iVar3,uVar7,uVar9,&puStack_28);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(&UNK_02b8fdb4 + _UNK_02b8ff94) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x03b2c734(**(undefined4 **)(&UNK_02b8fdd0 + _UNK_02b8ff98));
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(*puVar14);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bad050(iVar6,0,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uStack_30 = CONCAT44(*(undefined4 *)(iVar6 + 0x50),(uint)uStack_30);
          uVar9 = func_0x01524ffc((int)&uStack_30 + 4,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          puStack_88 = (undefined8 *)**(undefined4 **)(&UNK_02b8fe6c + _UNK_02b8ffa0);
          iStack_84 = 1;
          puStack_80 = (undefined8 *)0x0;
          uVar2 = func_0x029bca2c(iVar3,uVar7,**(undefined4 **)(&UNK_02b8fe60 + _UNK_02b8ff9c),uVar9
                                 );
        }
        else {
          iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          puStack_48 = *(undefined8 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          puStack_40 = (undefined8 *)0x0;
          puStack_50 = (undefined8 *)0xd;
          piStack_3c = (int *)iStack_4c;
          puStack_38 = puStack_48;
          ppuStack_34 = (undefined8 **)uStack_44;
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_5c = uVar9;
          iVar3 = func_0x014e9518(*puVar14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_58 = uVar7;
          iStack_54 = param_1;
          iVar3 = FUN_02bad050(iVar3,0,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uStack_30 = CONCAT44(*(int *)(iVar3 + 0x50) + 1,(uint)uStack_30);
          iStack_4c = func_0x01524ffc((int)&uStack_30 + 4,0);
          func_0x014385cc((uint)unaff_r8 | 4,iStack_4c);
          puStack_70 = puStack_38;
          iStack_74 = (int)piStack_3c;
          puStack_78 = puStack_40;
          uStack_7c = uStack_44;
          puStack_80 = puStack_48;
          iStack_84 = iStack_4c;
          puVar1 = puStack_50;
          iVar3 = **(int **)(*piVar16 + 0x5c);
          uStack_6c = ppuStack_34;
          if (iVar3 == 0) {
            puStack_60 = (undefined8 *)ppuStack_34;
            func_0x014388e4();
            uStack_6c = (undefined8 **)puStack_60;
          }
          uStack_68 = 0;
          uStack_64 = 0;
          puStack_88 = puVar1;
          func_0x02e62afc(iVar3,uStack_58,uStack_5c);
          iVar3 = iStack_54;
          func_0x02b8ffb0(iStack_54);
          iVar6 = func_0x014e9518(**(undefined4 **)(&UNK_02b8fd08 + _UNK_02b8ffa4));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = FUN_02bad050(iVar6,0,0);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          FUN_026f64c0(iVar6,*(int *)(iVar6 + 0x50) + 1,0);
          iVar6 = func_0x02b8e940(iVar3);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar9 = func_0x014e94d8(iVar6,0);
          iVar6 = func_0x03633c3c(uVar9,0,**(undefined4 **)(&UNK_02b8fd80 + _UNK_02b8ffa8));
          if (iVar6 == 0) {
            func_0x014388e4();
            FUN_02c59f34(0,0,0);
            func_0x014388e4();
          }
          else {
            FUN_02c59f34(iVar6,0,0);
          }
          puStack_88 = (undefined8 *)0x0;
          iStack_84 = 0;
          puStack_80 = (undefined8 *)0x0;
          FUN_02c5a5ec(iVar6,0,0xffffffff,6);
          iVar5 = *(int *)(iVar3 + 0x30);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar12 = *(int *)(iVar5 + 8);
          uVar2 = *(uint *)(iVar5 + 0xc);
          piVar10 = *(int **)(&UNK_02b8feec + _UNK_02b8ffac);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar13 = *piVar10;
          if (iVar12 == 0) {
            func_0x014388e4();
          }
          if (uVar2 < *(uint *)(iVar12 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar2 + 1;
            piVar10 = (int *)(iVar12 + uVar2 * 4 + 0x10);
            *piVar10 = iVar6;
            func_0x014385cc(piVar10,iVar6);
          }
          else {
            func_0x0152874c(iVar5,iVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          uVar2 = func_0x02b8ebd4(iVar3);
        }
      }
      return uVar2;
    }
    iVar3 = func_0x029540a4(0x5c71,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    unaff_lr = &UNK_02b8f9e8;
    unaff_r4 = param_1;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&puStack_88;
SUB_02868e1c:
    *(undefined **)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined8 ***)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar6 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x20) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    if (iVar6 != 0) {
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar6,0);
    }
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar3 == 0) {
      uVar7 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    uVar2 = func_0x024f56d0(iVar6,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
    return uVar2;
  case 0xb:
  case 0xe:
  case 0xf:
    iVar3 = **(int **)(**(int **)(&UNK_02c5c8cc + _UNK_02c5ccbc) + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02b67abc(iVar3,0xb,0);
    if (uVar2 != 0) {
      return uVar2;
    }
    if (*(int *)(**(int **)(&UNK_02c5c904 + _UNK_02c5ccc0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03b2c734(**(undefined4 **)(&UNK_02c5c920 + _UNK_02c5ccc4));
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puStack_38 = (undefined8 *)0x0;
    ppuStack_34 = (undefined8 **)0x0;
    uStack_30 = 0;
    puStack_28 = (undefined8 *)0x0;
    uVar2 = func_0x02c7a520(iVar3,uVar9,0,1);
    return uVar2;
  case 0xc:
    if (*(int *)(**(int **)(&UNK_02c5cae4 + _UNK_02c5ccc8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(&UNK_02c5cb00 + _UNK_02c5cccc));
    piVar10 = *(int **)(&UNK_02c5cb14 + _UNK_02c5ccd0);
    iVar6 = *piVar10;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x014387a4();
      iVar6 = *piVar10;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x28);
    piVar10 = (int *)func_0x014386f0(**(undefined4 **)(&UNK_02c5cb38 + _UNK_02c5ccd4),1);
    iVar6 = *(int *)(param_1 + 0x40);
    if (piVar10 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar6 != 0) &&
       (iVar5 = func_0x014387a8(iVar6,*(undefined4 *)(*piVar10 + 0x20)), iVar5 == 0)) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar10[3] == 0) {
      func_0x014388e8();
    }
    piVar10[4] = iVar6;
    func_0x014385cc(piVar10 + 4,iVar6);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_029903f0 + 0x29901d4);
    iStack_24 = iVar3;
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,piVar10,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar8 = '\x01';
    }
    puStack_28 = (undefined8 *)0x0;
    uStack_30 = (ulonglong)(uint)uStack_30;
    iVar6 = func_0x02953fd4(0x226,0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar3 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x04753c80(iVar6,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      uVar2 = 0;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar3 + 0x14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0475399c(iVar6,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar6 != 0) {
          iVar6 = *(int *)(iVar3 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f2f10(iVar6,0);
          if (iVar6 == 0) {
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f2f20(iVar3,200,0);
            if (iVar3 == 0) {
              return 0;
            }
          }
          ppuStack_34 = &puStack_28;
          puStack_38 = &uStack_30;
          piStack_3c = &iStack_24;
          puStack_40 = (undefined8 *)0x0;
          uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar7,uVar9,piVar10);
          iVar3 = *(int *)(iStack_24 + 0x18);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar3,uVar7,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&puStack_40);
          uVar2 = 1;
        }
      }
    }
    else {
      iVar6 = func_0x029540a4(0x226,0);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      puStack_48 = (undefined8 *)0x0;
      uVar2 = func_0x02871898(iVar6,iVar3,uVar9,piVar10);
    }
    return uVar2;
  }
  if (*(int *)(**(int **)(&UNK_02c5cbd8 + _UNK_02c5cca4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(&UNK_02c5cbf4 + _UNK_02c5cca8));
  iVar6 = func_0x024eecb8(param_1,0);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&iStack_24,iVar6,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puStack_38 = (undefined8 *)0x3f800000;
  ppuStack_34 = (undefined8 **)0x0;
  uVar4 = FUN_02c39590(iVar3,iStack_24,iStack_20,uStack_1c);
LAB_02c5cc60:
  return uVar4;
}

