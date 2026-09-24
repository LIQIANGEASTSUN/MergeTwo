
/* WARNING: Possible PIC construction at 0x02fa403c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02fa40e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02fa40ec) */
/* WARNING: Removing unreachable block (ram,0x02fa4100) */
/* WARNING: Removing unreachable block (ram,0x02fa4104) */
/* WARNING: Removing unreachable block (ram,0x02fa4120) */
/* WARNING: Removing unreachable block (ram,0x02fa4124) */
/* WARNING: Removing unreachable block (ram,0x02fa4140) */
/* WARNING: Removing unreachable block (ram,0x02fa4144) */
/* WARNING: Removing unreachable block (ram,0x02fa4174) */
/* WARNING: Removing unreachable block (ram,0x02fa4178) */
/* WARNING: Removing unreachable block (ram,0x02fa41c4) */
/* WARNING: Removing unreachable block (ram,0x02fa41d4) */
/* WARNING: Removing unreachable block (ram,0x02fa41d8) */
/* WARNING: Removing unreachable block (ram,0x02fa41ec) */
/* WARNING: Removing unreachable block (ram,0x02fa41f0) */
/* WARNING: Removing unreachable block (ram,0x02fa4210) */
/* WARNING: Removing unreachable block (ram,0x02fa4214) */
/* WARNING: Removing unreachable block (ram,0x02fa423c) */
/* WARNING: Removing unreachable block (ram,0x02fa4240) */
/* WARNING: Removing unreachable block (ram,0x02fa41a8) */
/* WARNING: Removing unreachable block (ram,0x02fa41b0) */
/* WARNING: Removing unreachable block (ram,0x02fa41b4) */
/* WARNING: Removing unreachable block (ram,0x02fa4248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fa3688(int *param_1,int param_2)

{
  code cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *unaff_r4;
  char *pcVar8;
  int *piVar9;
  code *pcVar10;
  code *pcVar11;
  int iVar12;
  code *unaff_r5;
  code *pcVar13;
  undefined4 uVar14;
  code *unaff_r6;
  undefined4 *puVar15;
  int *unaff_r7;
  undefined4 *puVar16;
  int *unaff_r11;
  int *piVar17;
  undefined4 unaff_lr;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02fa44f0 + 0x2fa36a4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa44f4 + 0x2fa36b8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa44f8 + 0x2fa36c4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa44fc + 0x2fa36d0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4500 + 0x2fa36dc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4504 + 0x2fa36e8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4508 + 0x2fa36f4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa450c + 0x2fa3700));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4510 + 0x2fa370c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4514 + 0x2fa3718));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4518 + 0x2fa3724));
    func_0x01438628(*(undefined4 *)(_UNK_02fa451c + 0x2fa3730));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4520 + 0x2fa373c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4740 + 0x2fa3748));
    func_0x01438628(*(undefined4 *)(_UNK_02fa474c + 0x2fa3754));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4750 + 0x2fa3760));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4754 + 0x2fa376c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4758 + 0x2fa3778));
    func_0x01438628(*(undefined4 *)(_UNK_02fa475c + 0x2fa3784));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4760 + 0x2fa3790));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4764 + 0x2fa379c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4768 + 0x2fa37a8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa476c + 0x2fa37b4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4770 + 0x2fa37c0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4774 + 0x2fa37cc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4778 + 0x2fa37d8));
    func_0x01438628(*(undefined4 *)(_UNK_02fa477c + 0x2fa37e4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4780 + 0x2fa37f0));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4784 + 0x2fa37fc));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4788 + 0x2fa3808));
    func_0x01438628(*(undefined4 *)(_UNK_02fa478c + 0x2fa3814));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4790 + 0x2fa3820));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4794 + 0x2fa382c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa4798 + 0x2fa3838));
    func_0x01438628(*(undefined4 *)(_UNK_02fa479c + 0x2fa3844));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47a0 + 0x2fa3850));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47a4 + 0x2fa385c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47a8 + 0x2fa3868));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47ac + 0x2fa3874));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47b0 + 0x2fa3880));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47b4 + 0x2fa388c));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47b8 + 0x2fa3898));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47bc + 0x2fa38a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fa47c0 + 0x2fa38b0));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2b65,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2b65,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
SUB_02869298:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar3 + 8);
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar3 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar12,uVar14,&uStack_38,uVar7);
    return;
  }
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02fa47c4 + 0x2fa3910));
  func_0x02fa6c14(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar3 + 8) = (int)param_1;
  func_0x014385cc((int *)(iVar3 + 8),param_1);
  if (param_2 == 0) {
    return;
  }
  piVar17 = (int *)(param_2 + 8);
  iVar12 = *piVar17;
  if (*(int *)(**(int **)(_UNK_02fa47c8 + 0x2fa3950) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa47cc + 0x2fa3970));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_02fa47d0 + 0x2fa39a4));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar12 == *(int *)(iVar4 + 0x24)) {
    if (*(int *)(**(int **)(_UNK_02fa47d4 + 0x2fa39d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa47d8 + 0x2fa39f0));
    piVar9 = *(int **)(_UNK_02fa47dc + 0x2fa3a04);
    iVar12 = *piVar9;
    if (*(int *)(iVar12 + 0x74) == 0) {
      func_0x014387a4();
      iVar12 = *piVar9;
    }
    uVar14 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x328);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa47e0 + 0x2fa3a2c),1);
    uStack_28 = CONCAT13(1,(undefined3)uStack_28);
    iVar12 = func_0x014387ac(**(undefined4 **)(_UNK_02fa47e4 + 0x2fa3a4c),(int)&uStack_28 + 3);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar12 != 0) &&
       (iVar4 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar9 + 0x20)), iVar4 == 0)) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar9[3] == 0) {
      func_0x014388e8();
    }
    piVar9[4] = iVar12;
    func_0x014385cc(piVar9 + 4,iVar12);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar3,uVar14,piVar9,0);
    iVar3 = FUN_02f95f8c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x6c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_026f0340(iVar3,1,0);
    if (*(int *)(**(int **)(_UNK_02fa47e8 + 0x2fa3b14) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x0202346c(0);
    uVar14 = func_0x01524ffc(piVar17,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    func_0x020257a4(iVar3,0x2fe,uVar14,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02fa47ec + 0x2fa3b94) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar12 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa47f0 + 0x2fa3bb0));
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x38);
  if ((iVar12 != 0) && (0 < *(int *)(iVar12 + 0xc))) {
    iVar4 = 0;
    puVar15 = *(undefined4 **)(_UNK_02fa47f4 + 0x2fa3bec);
    do {
      iVar5 = func_0x04cfd760(iVar12,iVar4,*puVar15);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar5 + 0x18) != 0) {
        iVar5 = func_0x04cfd760(iVar12,iVar4,*puVar15);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar5 + 0x18) == *piVar17) {
          param_2 = func_0x04cfd760(iVar12,iVar4,*puVar15);
          pcVar8 = (char *)(_UNK_02fa4ee8 + 0x2fa48b8);
          if (*pcVar8 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_02fa4eec + 0x2fa48cc));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4ef0 + 0x2fa48d8));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4ef4 + 0x2fa48e4));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4ef8 + 0x2fa48f0));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4efc + 0x2fa48fc));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f00 + 0x2fa4908));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f04 + 0x2fa4914));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f08 + 0x2fa4920));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f0c + 0x2fa492c));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f10 + 0x2fa4938));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f14 + 0x2fa4944));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f18 + 0x2fa4950));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f1c + 0x2fa495c));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f20 + 0x2fa4968));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f24 + 0x2fa4974));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f28 + 0x2fa4980));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f2c + 0x2fa498c));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f30 + 0x2fa4998));
            func_0x01438628(*(undefined4 *)(_UNK_02fa4f34 + 0x2fa49a4));
            *pcVar8 = '\x01';
          }
          iVar3 = func_0x02953fd4(0x2b6d,0);
          if (iVar3 != 0) {
            iVar3 = func_0x029540a4(0x2b6d,0);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            goto SUB_02869298;
          }
          if (param_2 == 0) {
            return;
          }
          uVar14 = *(undefined4 *)(param_2 + 0xc);
          uVar7 = *(undefined4 *)(param_2 + 0x10);
          iStack_2c = param_2;
          if (*(int *)(**(int **)(_UNK_02fa4f38 + 0x2fa4a0c) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_28 = func_0x02af43a8(uVar14,uVar7,0);
          iVar3 = 0;
          goto LAB_02fa4a4c;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar12 + 0xc));
  }
  iVar12 = FUN_02f96dac(param_1);
  if (*(int *)(**(int **)(_UNK_02fa47f8 + 0x2fa3c6c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x0202346c(0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  puVar15 = *(undefined4 **)(_UNK_02fa4800 + 0x2fa3cb4);
  if (iVar12 != 0) {
    puVar15 = *(undefined4 **)(_UNK_02fa47fc + 0x2fa3cac);
  }
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  func_0x020257a4(iVar4,0x223,*puVar15,0);
  if (*(int *)(**(int **)(_UNK_02fa4804 + 0x2fa3cf0) + 0x74) == 0) {
    func_0x014387a4();
  }
  unaff_r6 = (code *)0x0;
  iVar12 = func_0x0202346c(0);
  uVar14 = func_0x01524ffc(piVar17,0);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  func_0x020257a4(iVar12,0x300,uVar14,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  piVar9 = *(int **)(_UNK_02fa4808 + 0x2fa3d7c);
  *(undefined1 *)(iVar3 + 0xc) = 0;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar12 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa480c + 0x2fa3d9c));
  uVar14 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined4 *)(*param_1 + 0x1ac));
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  unaff_r7 = (int *)func_0x0374c388(iVar12,uVar14,**(undefined4 **)(_UNK_02fa4810 + 0x2fa3dd8));
  if (*(int *)(**(int **)(_UNK_02fa4814 + 0x2fa3df0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = 0;
  iVar12 = func_0x024efb9c(unaff_r7,0);
  if (iVar12 != 0) {
    if (unaff_r7 == (int *)0x0) {
      func_0x014388e4();
    }
    unaff_r6 = *(code **)(*unaff_r7 + 0x128);
    (*unaff_r6)(unaff_r7,0,1,*(undefined4 *)(*unaff_r7 + 300));
    *(undefined1 *)(iVar3 + 0xc) = 1;
  }
  puVar15 = *(undefined4 **)(_UNK_02fa4818 + 0x2fa3e5c);
  puVar16 = *(undefined4 **)(_UNK_02fa481c + 0x2fa3e64);
  iStack_2c = 0;
  iStack_30 = iVar3;
  while( true ) {
    iVar3 = FUN_02f95aa0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar4) break;
    unaff_r7 = (int *)func_0x014388d4(**(undefined4 **)(_UNK_02fa4820 + 0x2fa3e94));
    func_0x02fa6ea8(unaff_r7,0);
    iVar3 = FUN_02f95aa0(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfd760(iVar3,iVar4,**(undefined4 **)(_UNK_02fa4824 + 0x2fa3ecc));
    if (unaff_r7 == (int *)0x0) {
      func_0x014388e4();
    }
    unaff_r7[2] = iVar3;
    func_0x014385cc(unaff_r7 + 2,iVar3);
    if (*(int *)(**(int **)(_UNK_02fa4828 + 0x2fa3f00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa482c + 0x2fa3f1c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x34);
    unaff_r6 = (code *)func_0x014388d4(**(undefined4 **)(_UNK_02fa4830 + 0x2fa3f3c));
    func_0x03a062d0(unaff_r6,unaff_r7,*puVar15,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfe1c0(iVar3,unaff_r6,*puVar16);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) == *piVar17)) {
      iStack_2c = iVar3;
    }
    iVar4 = iVar4 + 1;
  }
  iVar12 = FUN_02f901fc(param_1);
  iVar3 = iStack_2c;
  if (iVar12 == 0) {
    if (iStack_2c == 0) {
      func_0x014388e4();
    }
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    uVar7 = *(undefined4 *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_02fa4854 + 0x2fa426c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iStack_2c = func_0x02af43a8(uVar14,uVar7,0);
    iVar3 = 0;
    while( true ) {
      iVar12 = iStack_2c;
      if (iStack_2c == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar12 + 0xc) <= iVar3) break;
      iVar12 = func_0x04cfd760(iVar12,iVar3,**(undefined4 **)(_UNK_02fa4858 + 0x2fa42d0));
      iVar4 = **(int **)(**(int **)(_UNK_02fa485c + 0x2fa42ec) + 0x5c);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      uVar14 = *(undefined4 *)(iVar12 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02e651cc(iVar4,uVar14,0);
      if (iVar4 == 0) {
        if (*(int *)(**(int **)(_UNK_02fa4860 + 0x2fa4330) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x0202346c(0);
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fa4864 + 0x2fa4358));
        func_0x02025440(iVar5,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar5 + 8) = 0x7a;
        uVar14 = *(undefined4 *)(iVar12 + 8);
        *(undefined1 *)(iVar5 + 0x25) = 1;
        *(undefined4 *)(iVar5 + 0xc) = uVar14;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02024d08(iVar4,iVar5,1,0);
        iVar4 = FUN_02fa3548(param_1,*(undefined4 *)(iVar12 + 8));
        if (iVar4 == 0) goto LAB_02fa4478;
        if (0 < *(int *)(iVar12 + 0xc)) {
          iVar4 = 0;
          do {
            iVar5 = FUN_02f95f8c(param_1);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x18);
            uVar14 = *(undefined4 *)(iVar12 + 8);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar5,uVar14,**(undefined4 **)(_UNK_02fa4868 + 0x2fa440c));
            iVar5 = **(int **)(_UNK_02fa486c + 0x2fa4420);
            param_1[0x13] = param_1[0x13] + 1;
            if (*(int *)(iVar5 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = FUN_02f94b94();
            if (iVar5 != 0) {
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x02fad0d4(iVar5,0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar12 + 0xc));
        }
      }
      else {
LAB_02fa4478:
        uVar14 = *(undefined4 *)(iVar12 + 8);
        uVar7 = *(undefined4 *)(iVar12 + 0xc);
        iVar12 = **(int **)(**(int **)(_UNK_02fa4870 + 0x2fa4484) + 0x5c);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iStack_40 = 1;
        uStack_60 = 0xf5;
        uStack_5c = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        iStack_48 = 0;
        uStack_44 = 0;
        FUN_02e64460(iVar12,uVar14,uVar7);
      }
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(**(int **)(_UNK_02fa4874 + 0x2fa4530) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa4878 + 0x2fa454c));
    iVar3 = iStack_30;
    piVar17 = *(int **)(_UNK_02fa487c + 0x2fa4560);
    iVar5 = *piVar17;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar17;
    }
    uVar14 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x1ac);
    piVar17 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa4880 + 0x2fa4588),1);
    if (piVar17 == (int *)0x0) {
      func_0x014388e4();
    }
    iVar5 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar17 + 0x20));
    if (iVar5 == 0) {
      uVar7 = func_0x01438904();
      func_0x01438790(uVar7,0);
    }
    if (piVar17[3] == 0) {
      func_0x014388e8();
    }
    piVar17[4] = iVar12;
    func_0x014385cc(piVar17 + 4,iVar12);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar4,uVar14,piVar17,0);
    if (*(int *)(**(int **)(_UNK_02fa4884 + 0x2fa4614) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02fa4888 + 0x2fa4630));
    if (*(int *)(**(int **)(_UNK_02fa488c + 0x2fa4644) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa4890 + 0x2fa4660));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar14 = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fa4894 + 0x2fa4680));
    func_0x0152e3ec(iVar5,iVar3,**(undefined4 **)(_UNK_02fa4898 + 0x2fa46a4),0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_60 = 0xf5;
    uStack_5c = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = 0;
    uStack_44 = 0;
    iStack_40 = iVar5;
    func_0x02b75870(iVar4,iVar12,uVar14,0);
    iVar3 = FUN_02f96dac(param_1);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_02f95f8c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_026efaec(iVar3,0,0);
    iVar3 = func_0x02953fd4(0x2b85,0);
    if (iVar3 != 0) {
      iVar3 = func_0x029540a4(0x2b85,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_30 = 0;
      func_0x024f56c0(&iStack_48,0,0);
      iStack_30 = iStack_48;
      iStack_2c = uStack_44;
      uStack_28 = iStack_40;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01523a6c(&iStack_30,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01523a6c(&iStack_30,param_1,0);
      iVar12 = *(int *)(iVar3 + 8);
      uVar14 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      uVar7 = 2;
      if (iVar3 == 0) {
        uVar7 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x024f56d0(iVar12,uVar14,&iStack_30,uVar7);
      return;
    }
    iVar3 = FUN_02fa2cc0(param_1);
    pcVar10 = (code *)(iVar3 + 1);
    iVar3 = func_0x02953fd4(0x2b87,0);
    if (iVar3 == 0) {
      iVar3 = FUN_02f95f8c(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar8 = (char *)(_UNK_026efb8c + 0x26efb04);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026efb90 + 0x26efb18),pcVar10,0);
        func_0x01438628(*(undefined4 *)(_UNK_026efb94 + 0x26efb24));
        *pcVar8 = '\x01';
      }
      if (*(code **)(iVar3 + 0x5c) != pcVar10) {
        piVar17 = *(int **)(_UNK_026efb98 + 0x26efb44);
        *(code **)(iVar3 + 0x5c) = pcVar10;
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026efb9c + 0x26efb64));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(uint *)(iVar3 + 0x60);
        *(uint *)(iVar3 + 0x60) = uVar2 + 1;
        *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
        return;
      }
      return;
    }
    iVar3 = func_0x029540a4(0x2b87,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    goto SUB_0286c2b8;
  }
  iVar3 = FUN_02f95f8c(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar3 + 0x30);
  iVar3 = *piVar17;
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046c26fc(iVar12,iVar3,**(undefined4 **)(_UNK_02fa4834 + 0x2fa3fe8));
  unaff_r11 = piVar17;
  if (iVar3 == 0) {
    iVar3 = FUN_02f95f8c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    pcVar13 = *(code **)(iVar3 + 0x30);
    pcVar10 = (code *)*piVar17;
    if (pcVar13 == (code *)0x0) {
      func_0x014388e4();
    }
    uVar14 = 0;
    iVar3 = **(int **)(_UNK_02fa4838 + 0x2fa4038);
    unaff_lr = 0x2fa4040;
    unaff_r4 = pcVar10;
    unaff_r5 = pcVar13;
    register0x00000054 = (BADSPACEBASE *)&uStack_60;
SUB_03b70cd0:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = unaff_r11;
    *(int **)((int)register0x00000054 + -0xc) = unaff_r7;
    *(code **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(code **)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = (int)unaff_r4;
    if (pcVar13 == (code *)0x0) {
      func_0x024f83d4();
    }
    func_0x046c24b0(pcVar13,pcVar10,uVar14,
                    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24));
    uVar14 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28);
    pcVar11 = *(code **)((int)register0x00000054 + -0x18);
    iVar3 = *(int *)((int)register0x00000054 + -0x14);
    pcVar10 = *(code **)((int)register0x00000054 + -0x10);
    pcVar6 = *(code **)((int)register0x00000054 + -0xc);
    unaff_r11 = *(int **)((int)register0x00000054 + -8);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
    goto SUB_03b70bb0;
  }
  iVar3 = FUN_02f95f8c(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar13 = *(code **)(iVar3 + 0x30);
  pcVar10 = (code *)*piVar17;
  if (pcVar13 == (code *)0x0) {
    func_0x014388e4();
    unaff_r4 = (code *)func_0x03b70fac(0,pcVar10,**(undefined4 **)(_UNK_02fa4840 + 0x2fa40c0));
    func_0x014388e4();
  }
  else {
    unaff_r4 = (code *)func_0x03b70fac(pcVar13,pcVar10,**(undefined4 **)(_UNK_02fa483c + 0x2fa4078))
    ;
  }
  iVar3 = **(int **)(_UNK_02fa4844 + 0x2fa40e4);
  unaff_lr = 0x2fa40ec;
  unaff_r5 = pcVar10;
  unaff_r6 = pcVar13;
  register0x00000054 = (BADSPACEBASE *)&uStack_60;
  pcVar6 = unaff_r4;
SUB_03b70fe4:
  pcVar6 = pcVar6 + 1;
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = unaff_r11;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r7;
  *(code **)((int)register0x00000054 + -0x10) = unaff_r6;
  *(code **)((int)register0x00000054 + -0x14) = unaff_r5;
  *(code **)((int)register0x00000054 + -0x18) = unaff_r4;
  *(code **)((int)register0x00000054 + -0x1c) = pcVar6;
  if (pcVar13 == (code *)0x0) {
    func_0x024f83d4();
  }
  iVar12 = func_0x046c26fc(pcVar13,pcVar10,
                           *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
  if (iVar12 != 0) {
    if (pcVar13 == (code *)0x0) {
      func_0x024f83d4();
    }
    uVar14 = func_0x046c23f8(pcVar13,pcVar10,
                             *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x34));
    iVar12 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x20) = uVar14;
    uVar14 = func_0x024f83c4(*(undefined4 *)(*(int *)(iVar12 + 0x60) + 0x20),
                             (undefined1 *)((int)register0x00000054 + -0x20));
    iVar12 = func_0x0515c410((undefined1 *)((int)register0x00000054 + -0x1c),uVar14,
                             *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
    if (iVar12 != 0) {
      return;
    }
    pcVar6 = *(code **)((int)register0x00000054 + -0x1c);
  }
  if (pcVar13 == (code *)0x0) {
    func_0x024f83d4();
  }
  func_0x046c2488(pcVar13,pcVar10,pcVar6,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x40));
  uVar14 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x28);
  uVar7 = 0x3b710c8;
  pcVar11 = pcVar13;
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
SUB_03b70bb0:
  *(undefined4 *)((int)register0x00000054 + -4) = uVar7;
  *(int **)((int)register0x00000054 + -8) = unaff_r11;
  *(code **)((int)register0x00000054 + -0xc) = pcVar6;
  *(code **)((int)register0x00000054 + -0x10) = pcVar10;
  *(int *)((int)register0x00000054 + -0x14) = iVar3;
  *(code **)((int)register0x00000054 + -0x18) = pcVar11;
  pcVar8 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
  if (*pcVar8 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),uVar14);
    func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
    *pcVar8 = '\x01';
  }
  piVar17 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
  if (*(int *)(*piVar17 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar15 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
  iVar3 = func_0x04e4a028(*puVar15);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  cVar1 = pcVar13[0x30];
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  if (cVar1 != (code)0x0) {
    if (*(int *)(*piVar17 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar3 = func_0x04e4a028(*puVar15);
    if (iVar3 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  if (pcVar13[0x31] != (code)0x0) {
    if (*(int *)(*piVar17 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar3 = func_0x04e4a028(*puVar15);
    if (iVar3 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar3 + 0x39) = 1;
  }
  return;
LAB_02fa4a4c:
  iVar12 = uStack_28;
  if (uStack_28 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar12 + 0xc) <= iVar3) goto LAB_02fa4c94;
  iVar12 = func_0x04cfd760(iVar12,iVar3,**(undefined4 **)(_UNK_02fa4f3c + 0x2fa4a74));
  iVar4 = **(int **)(**(int **)(_UNK_02fa4f40 + 0x2fa4a90) + 0x5c);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  uVar14 = *(undefined4 *)(iVar12 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = FUN_02e651cc(iVar4,uVar14,0);
  if (iVar4 == 0) {
    if (*(int *)(**(int **)(_UNK_02fa4f44 + 0x2fa4ad4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x0202346c(0);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fa4f48 + 0x2fa4afc));
    func_0x02025440(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 8) = 0x7a;
    uVar14 = *(undefined4 *)(iVar12 + 8);
    *(undefined1 *)(iVar5 + 0x25) = 1;
    *(undefined4 *)(iVar5 + 0xc) = uVar14;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02024d08(iVar4,iVar5,1,0);
    iVar4 = FUN_02fa3548(param_1,*(undefined4 *)(iVar12 + 8));
    if (iVar4 == 0) goto LAB_02fa4c1c;
    if (0 < *(int *)(iVar12 + 0xc)) {
      iVar4 = 0;
      do {
        iVar5 = FUN_02f95f8c(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        uVar14 = *(undefined4 *)(iVar12 + 8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar5,uVar14,**(undefined4 **)(_UNK_02fa4f4c + 0x2fa4bb0));
        iVar5 = **(int **)(_UNK_02fa4f50 + 0x2fa4bc4);
        param_1[0x13] = param_1[0x13] + 1;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = FUN_02f94b94();
        if (iVar5 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x02fad0d4(iVar5,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar12 + 0xc));
    }
  }
  else {
LAB_02fa4c1c:
    uVar14 = *(undefined4 *)(iVar12 + 8);
    uVar7 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = **(int **)(**(int **)(_UNK_02fa4f54 + 0x2fa4c28) + 0x5c);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iStack_40 = 1;
    uStack_60 = 0xf3;
    uStack_5c = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    iStack_48 = 0;
    uStack_44 = 0;
    FUN_02e64460(iVar12,uVar14,uVar7);
  }
  iVar3 = iVar3 + 1;
  goto LAB_02fa4a4c;
LAB_02fa4c94:
  if (*(int *)(**(int **)(_UNK_02fa4f58 + 0x2fa4ca0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa4f5c + 0x2fa4cbc));
  piVar17 = *(int **)(_UNK_02fa4f60 + 0x2fa4cd0);
  iVar4 = *piVar17;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar17;
  }
  uVar14 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1ac);
  piVar17 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fa4f64 + 0x2fa4cf4),1);
  if (piVar17 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar4 = func_0x014387a8(iVar12,*(undefined4 *)(*piVar17 + 0x20));
  if (iVar4 == 0) {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar17[3] == 0) {
    func_0x014388e8();
  }
  piVar17[4] = iVar12;
  func_0x014385cc(piVar17 + 4,iVar12);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar3,uVar14,piVar17,0);
  if (*(int *)(**(int **)(_UNK_02fa4f68 + 0x2fa4d80) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02fa4f6c + 0x2fa4d9c));
  if (*(int *)(**(int **)(_UNK_02fa4f70 + 0x2fa4db0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02fa4f74 + 0x2fa4dcc));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  piVar17 = *(int **)(_UNK_02fa4f78 + 0x2fa4dec);
  uVar14 = *(undefined4 *)(iVar4 + 0x10);
  iVar4 = *piVar17;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar17;
  }
  iVar5 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
  if (iVar5 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x014387a4();
      iVar4 = *piVar17;
    }
    uVar7 = **(undefined4 **)(iVar4 + 0x5c);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fa4f7c + 0x2fa4e38));
    func_0x0152e3ec(iVar5,uVar7,**(undefined4 **)(_UNK_02fa4f80 + 0x2fa4e58),0);
    piVar17 = (int *)(*(int *)(*piVar17 + 0x5c) + 8);
    *piVar17 = iVar5;
    func_0x014385cc(piVar17,iVar5);
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_60 = 0xf3;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = iVar5;
  func_0x02b75870(iVar3,iVar12,uVar14,0);
  pcVar10 = *(code **)(iStack_2c + 8);
  pcVar8 = (char *)(_UNK_02fa64d8 + 0x2fa6334);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fa64dc + 0x2fa6348));
    func_0x01438628(*(undefined4 *)(_UNK_02fa64e0 + 0x2fa6354));
    func_0x01438628(*(undefined4 *)(_UNK_02fa64e4 + 0x2fa6360));
    func_0x01438628(*(undefined4 *)(_UNK_02fa64e8 + 0x2fa636c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2b7e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2b7e,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
SUB_0286c2b8:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,pcVar10,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,pcVar10,0);
    iVar12 = *(int *)(iVar3 + 8);
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar3 == 0) {
      uVar7 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar12,uVar14,&uStack_38,uVar7);
    return;
  }
  iVar3 = FUN_02f95f8c(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x74);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046c26fc(iVar3,pcVar10,**(undefined4 **)(_UNK_02fa64ec + 0x2fa6404));
  iVar12 = FUN_02f95f8c(param_1);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x74);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  pcVar13 = *(code **)(iVar12 + 0x18);
  if (pcVar13 == (code *)0x0) {
    func_0x014388e4();
    if (iVar3 == 0) goto LAB_02fa64b8;
    pcVar6 = (code *)func_0x03b70fac(0,pcVar10,**(undefined4 **)(_UNK_02fa64f0 + 0x2fa6488));
    func_0x014388e4();
  }
  else {
    if (iVar3 == 0) {
LAB_02fa64b8:
      uVar14 = 1;
      iVar3 = **(int **)(_UNK_02fa64fc + 0x2fa64cc);
      goto SUB_03b70cd0;
    }
    pcVar6 = (code *)func_0x03b70fac(pcVar13,pcVar10,**(undefined4 **)(_UNK_02fa64f4 + 0x2fa645c));
  }
  iVar3 = **(int **)(_UNK_02fa64f8 + 0x2fa64ac);
  goto SUB_03b70fe4;
}

