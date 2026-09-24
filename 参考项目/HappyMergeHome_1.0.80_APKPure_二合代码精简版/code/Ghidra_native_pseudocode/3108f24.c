
/* WARNING: Possible PIC construction at 0x031198d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03119984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03b710c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03119988) */
/* WARNING: Removing unreachable block (ram,0x0311999c) */
/* WARNING: Removing unreachable block (ram,0x031199a0) */
/* WARNING: Removing unreachable block (ram,0x031199bc) */
/* WARNING: Removing unreachable block (ram,0x031199c0) */
/* WARNING: Removing unreachable block (ram,0x031199dc) */
/* WARNING: Removing unreachable block (ram,0x031199e0) */
/* WARNING: Removing unreachable block (ram,0x03119a10) */
/* WARNING: Removing unreachable block (ram,0x03119a14) */
/* WARNING: Removing unreachable block (ram,0x03119a60) */
/* WARNING: Removing unreachable block (ram,0x03119a70) */
/* WARNING: Removing unreachable block (ram,0x03119a74) */
/* WARNING: Removing unreachable block (ram,0x03119a88) */
/* WARNING: Removing unreachable block (ram,0x03119a8c) */
/* WARNING: Removing unreachable block (ram,0x03119aac) */
/* WARNING: Removing unreachable block (ram,0x03119ab0) */
/* WARNING: Removing unreachable block (ram,0x03119ad8) */
/* WARNING: Removing unreachable block (ram,0x03119adc) */
/* WARNING: Removing unreachable block (ram,0x03119a44) */
/* WARNING: Removing unreachable block (ram,0x03119a4c) */
/* WARNING: Removing unreachable block (ram,0x03119a50) */
/* WARNING: Removing unreachable block (ram,0x03119ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03118f24(int *param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_03119d8c + 0x3118f40);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03119d90 + 0x3118f54));
    func_0x01438628(*(undefined4 *)(_UNK_03119d94 + 0x3118f60));
    func_0x01438628(*(undefined4 *)(_UNK_03119d98 + 0x3118f6c));
    func_0x01438628(*(undefined4 *)(_UNK_03119d9c + 0x3118f78));
    func_0x01438628(*(undefined4 *)(_UNK_03119da0 + 0x3118f84));
    func_0x01438628(*(undefined4 *)(_UNK_03119da4 + 0x3118f90));
    func_0x01438628(*(undefined4 *)(_UNK_03119da8 + 0x3118f9c));
    func_0x01438628(*(undefined4 *)(_UNK_03119dac + 0x3118fa8));
    func_0x01438628(*(undefined4 *)(_UNK_03119db0 + 0x3118fb4));
    func_0x01438628(*(undefined4 *)(_UNK_03119db4 + 0x3118fc0));
    func_0x01438628(*(undefined4 *)(_UNK_03119db8 + 0x3118fcc));
    func_0x01438628(*(undefined4 *)(_UNK_03119dbc + 0x3118fd8));
    func_0x01438628(*(undefined4 *)(_UNK_03119fdc + 0x3118fe4));
    func_0x01438628(*(undefined4 *)(_UNK_03119fe8 + 0x3118ff0));
    func_0x01438628(*(undefined4 *)(_UNK_03119fec + 0x3118ffc));
    func_0x01438628(*(undefined4 *)(_UNK_03119ff0 + 0x3119008));
    func_0x01438628(*(undefined4 *)(_UNK_03119ff4 + 0x3119014));
    func_0x01438628(*(undefined4 *)(_UNK_03119ff8 + 0x3119020));
    func_0x01438628(*(undefined4 *)(_UNK_03119ffc + 0x311902c));
    func_0x01438628(*(undefined4 *)(_UNK_0311a000 + 0x3119038));
    func_0x01438628(*(undefined4 *)(_UNK_0311a004 + 0x3119044));
    func_0x01438628(*(undefined4 *)(_UNK_0311a008 + 0x3119050));
    func_0x01438628(*(undefined4 *)(_UNK_0311a00c + 0x311905c));
    func_0x01438628(*(undefined4 *)(_UNK_0311a010 + 0x3119068));
    func_0x01438628(*(undefined4 *)(_UNK_0311a014 + 0x3119074));
    func_0x01438628(*(undefined4 *)(_UNK_0311a018 + 0x3119080));
    func_0x01438628(*(undefined4 *)(_UNK_0311a01c + 0x311908c));
    func_0x01438628(*(undefined4 *)(_UNK_0311a020 + 0x3119098));
    func_0x01438628(*(undefined4 *)(_UNK_0311a024 + 0x31190a4));
    func_0x01438628(*(undefined4 *)(_UNK_0311a028 + 0x31190b0));
    func_0x01438628(*(undefined4 *)(_UNK_0311a02c + 0x31190bc));
    func_0x01438628(*(undefined4 *)(_UNK_0311a030 + 0x31190c8));
    func_0x01438628(*(undefined4 *)(_UNK_0311a034 + 0x31190d4));
    func_0x01438628(*(undefined4 *)(_UNK_0311a038 + 0x31190e0));
    func_0x01438628(*(undefined4 *)(_UNK_0311a03c + 0x31190ec));
    func_0x01438628(*(undefined4 *)(_UNK_0311a040 + 0x31190f8));
    func_0x01438628(*(undefined4 *)(_UNK_0311a044 + 0x3119104));
    func_0x01438628(*(undefined4 *)(_UNK_0311a048 + 0x3119110));
    func_0x01438628(*(undefined4 *)(_UNK_0311a04c + 0x311911c));
    func_0x01438628(*(undefined4 *)(_UNK_0311a050 + 0x3119128));
    func_0x01438628(*(undefined4 *)(_UNK_0311a054 + 0x3119134));
    func_0x01438628(*(undefined4 *)(_UNK_0311a058 + 0x3119140));
    func_0x01438628(*(undefined4 *)(_UNK_0311a05c + 0x311914c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2af9,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2af9,0);
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
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0311a060 + 0x31191ac));
  func_0x0311c43c(iVar3,0);
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
  if (*(int *)(**(int **)(_UNK_0311a064 + 0x31191ec) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a068 + 0x311920c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_0311a06c + 0x3119240));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  if (iVar12 == *(int *)(iVar4 + 0x24)) {
    if (*(int *)(**(int **)(_UNK_0311a070 + 0x3119270) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a074 + 0x311928c));
    piVar9 = *(int **)(_UNK_0311a078 + 0x31192a0);
    iVar12 = *piVar9;
    if (*(int *)(iVar12 + 0x74) == 0) {
      func_0x014387a4();
      iVar12 = *piVar9;
    }
    uVar14 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x328);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0311a07c + 0x31192c8),1);
    uStack_28 = CONCAT13(1,(undefined3)uStack_28);
    iVar12 = func_0x014387ac(**(undefined4 **)(_UNK_0311a080 + 0x31192e8),(int)&uStack_28 + 3);
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
    iVar3 = FUN_0310c164(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x6c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_026f0340(iVar3,1,0);
    if (*(int *)(**(int **)(_UNK_0311a084 + 0x31193b0) + 0x74) == 0) {
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
    func_0x020257a4(iVar3,0x2e0,uVar14,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0311a088 + 0x3119430) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar12 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a08c + 0x311944c));
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar12 + 0x38);
  if ((iVar12 != 0) && (0 < *(int *)(iVar12 + 0xc))) {
    iVar4 = 0;
    puVar15 = *(undefined4 **)(_UNK_0311a090 + 0x3119488);
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
          pcVar8 = (char *)(_UNK_0311a784 + 0x311a154);
          if (*pcVar8 == '\0') {
            func_0x01438628(*(undefined4 *)(_UNK_0311a788 + 0x311a168));
            func_0x01438628(*(undefined4 *)(_UNK_0311a78c + 0x311a174));
            func_0x01438628(*(undefined4 *)(_UNK_0311a790 + 0x311a180));
            func_0x01438628(*(undefined4 *)(_UNK_0311a794 + 0x311a18c));
            func_0x01438628(*(undefined4 *)(_UNK_0311a798 + 0x311a198));
            func_0x01438628(*(undefined4 *)(_UNK_0311a79c + 0x311a1a4));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7a0 + 0x311a1b0));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7a4 + 0x311a1bc));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7a8 + 0x311a1c8));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7ac + 0x311a1d4));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7b0 + 0x311a1e0));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7b4 + 0x311a1ec));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7b8 + 0x311a1f8));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7bc + 0x311a204));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7c0 + 0x311a210));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7c4 + 0x311a21c));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7c8 + 0x311a228));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7cc + 0x311a234));
            func_0x01438628(*(undefined4 *)(_UNK_0311a7d0 + 0x311a240));
            *pcVar8 = '\x01';
          }
          iVar3 = func_0x02953fd4(0x2b01,0);
          if (iVar3 != 0) {
            iVar3 = func_0x029540a4(0x2b01,0);
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
          if (*(int *)(**(int **)(_UNK_0311a7d4 + 0x311a2a8) + 0x74) == 0) {
            func_0x014387a4();
          }
          uStack_28 = func_0x02af43a8(uVar14,uVar7,0);
          iVar3 = 0;
          goto LAB_0311a2e8;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar12 + 0xc));
  }
  iVar12 = FUN_0310cf84(param_1);
  if (*(int *)(**(int **)(_UNK_0311a094 + 0x3119508) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x0202346c(0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  puVar15 = *(undefined4 **)(_UNK_0311a09c + 0x3119550);
  if (iVar12 != 0) {
    puVar15 = *(undefined4 **)(_UNK_0311a098 + 0x3119548);
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
  if (*(int *)(**(int **)(_UNK_0311a0a0 + 0x311958c) + 0x74) == 0) {
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
  func_0x020257a4(iVar12,0x2e2,uVar14,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  piVar9 = *(int **)(_UNK_0311a0a4 + 0x3119618);
  *(undefined1 *)(iVar3 + 0xc) = 0;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar12 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a0a8 + 0x3119638));
  uVar14 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined4 *)(*param_1 + 0x1ac));
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  unaff_r7 = (int *)func_0x0374c388(iVar12,uVar14,**(undefined4 **)(_UNK_0311a0ac + 0x3119674));
  if (*(int *)(**(int **)(_UNK_0311a0b0 + 0x311968c) + 0x74) == 0) {
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
  puVar15 = *(undefined4 **)(_UNK_0311a0b4 + 0x31196f8);
  puVar16 = *(undefined4 **)(_UNK_0311a0b8 + 0x3119700);
  iStack_2c = 0;
  iStack_30 = iVar3;
  while( true ) {
    iVar3 = FUN_0310bc78(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar3 + 0xc) <= iVar4) break;
    unaff_r7 = (int *)func_0x014388d4(**(undefined4 **)(_UNK_0311a0bc + 0x3119730));
    func_0x0311c6d0(unaff_r7,0);
    iVar3 = FUN_0310bc78(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfd760(iVar3,iVar4,**(undefined4 **)(_UNK_0311a0c0 + 0x3119768));
    if (unaff_r7 == (int *)0x0) {
      func_0x014388e4();
    }
    unaff_r7[2] = iVar3;
    func_0x014385cc(unaff_r7 + 2,iVar3);
    if (*(int *)(**(int **)(_UNK_0311a0c4 + 0x311979c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a0c8 + 0x31197b8));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x34);
    unaff_r6 = (code *)func_0x014388d4(**(undefined4 **)(_UNK_0311a0cc + 0x31197d8));
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
  iVar12 = FUN_03105e3c(param_1);
  iVar3 = iStack_2c;
  if (iVar12 == 0) {
    if (iStack_2c == 0) {
      func_0x014388e4();
    }
    uVar14 = *(undefined4 *)(iVar3 + 0xc);
    uVar7 = *(undefined4 *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_0311a0f0 + 0x3119b08) + 0x74) == 0) {
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
      iVar12 = func_0x04cfd760(iVar12,iVar3,**(undefined4 **)(_UNK_0311a0f4 + 0x3119b6c));
      iVar4 = **(int **)(**(int **)(_UNK_0311a0f8 + 0x3119b88) + 0x5c);
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      uVar14 = *(undefined4 *)(iVar12 + 8);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = FUN_02e651cc(iVar4,uVar14,0);
      if (iVar4 == 0) {
        if (*(int *)(**(int **)(_UNK_0311a0fc + 0x3119bcc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x0202346c(0);
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0311a100 + 0x3119bf4));
        func_0x02025440(iVar5,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar5 + 8) = 0x75;
        uVar14 = *(undefined4 *)(iVar12 + 8);
        *(undefined1 *)(iVar5 + 0x25) = 1;
        *(undefined4 *)(iVar5 + 0xc) = uVar14;
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x02024d08(iVar4,iVar5,1,0);
        iVar4 = FUN_03118de4(param_1,*(undefined4 *)(iVar12 + 8));
        if (iVar4 == 0) goto LAB_03119d14;
        if (0 < *(int *)(iVar12 + 0xc)) {
          iVar4 = 0;
          do {
            iVar5 = FUN_0310c164(param_1);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x18);
            uVar14 = *(undefined4 *)(iVar12 + 8);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar5,uVar14,**(undefined4 **)(_UNK_0311a104 + 0x3119ca8));
            iVar5 = **(int **)(_UNK_0311a108 + 0x3119cbc);
            param_1[0x13] = param_1[0x13] + 1;
            if (*(int *)(iVar5 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = FUN_0310ad6c();
            if (iVar5 != 0) {
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              func_0x031228fc(iVar5,0);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(iVar12 + 0xc));
        }
      }
      else {
LAB_03119d14:
        uVar14 = *(undefined4 *)(iVar12 + 8);
        uVar7 = *(undefined4 *)(iVar12 + 0xc);
        iVar12 = **(int **)(**(int **)(_UNK_0311a10c + 0x3119d20) + 0x5c);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iStack_40 = 1;
        uStack_60 = 0xde;
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
    if (*(int *)(**(int **)(_UNK_0311a110 + 0x3119dcc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a114 + 0x3119de8));
    iVar3 = iStack_30;
    piVar17 = *(int **)(_UNK_0311a118 + 0x3119dfc);
    iVar5 = *piVar17;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar17;
    }
    uVar14 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x1ac);
    piVar17 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0311a11c + 0x3119e24),1);
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
    if (*(int *)(**(int **)(_UNK_0311a120 + 0x3119eb0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0311a124 + 0x3119ecc));
    if (*(int *)(**(int **)(_UNK_0311a128 + 0x3119ee0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a12c + 0x3119efc));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar14 = *(undefined4 *)(iVar5 + 0x10);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0311a130 + 0x3119f1c));
    func_0x05096384(iVar5,iVar3,**(undefined4 **)(_UNK_0311a134 + 0x3119f40),0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uStack_60 = 0xde;
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
    iVar3 = FUN_0310cf84(param_1);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_0310c164(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    FUN_026efaec(iVar3,0,0);
    iVar3 = func_0x02953fd4(0x2b1a,0);
    if (iVar3 != 0) {
      iVar3 = func_0x029540a4(0x2b1a,0);
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
    iVar3 = FUN_03118954(param_1);
    pcVar10 = (code *)(iVar3 + 1);
    iVar3 = func_0x02953fd4(0x2b1c,0);
    if (iVar3 == 0) {
      iVar3 = FUN_0310c164(param_1);
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
    iVar3 = func_0x029540a4(0x2b1c,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    goto SUB_0286c2b8;
  }
  iVar3 = FUN_0310c164(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar12 = *(int *)(iVar3 + 0x30);
  iVar3 = *piVar17;
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x046c26fc(iVar12,iVar3,**(undefined4 **)(_UNK_0311a0d0 + 0x3119884));
  unaff_r11 = piVar17;
  if (iVar3 == 0) {
    iVar3 = FUN_0310c164(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    pcVar13 = *(code **)(iVar3 + 0x30);
    pcVar10 = (code *)*piVar17;
    if (pcVar13 == (code *)0x0) {
      func_0x014388e4();
    }
    uVar14 = 0;
    iVar3 = **(int **)(_UNK_0311a0d4 + 0x31198d4);
    unaff_lr = 0x31198dc;
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
  iVar3 = FUN_0310c164(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar13 = *(code **)(iVar3 + 0x30);
  pcVar10 = (code *)*piVar17;
  if (pcVar13 == (code *)0x0) {
    func_0x014388e4();
    unaff_r4 = (code *)func_0x03b70fac(0,pcVar10,**(undefined4 **)(_UNK_0311a0dc + 0x311995c));
    func_0x014388e4();
  }
  else {
    unaff_r4 = (code *)func_0x03b70fac(pcVar13,pcVar10,**(undefined4 **)(_UNK_0311a0d8 + 0x3119914))
    ;
  }
  iVar3 = **(int **)(_UNK_0311a0e0 + 0x3119980);
  unaff_lr = 0x3119988;
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
LAB_0311a2e8:
  iVar12 = uStack_28;
  if (uStack_28 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar12 + 0xc) <= iVar3) goto LAB_0311a530;
  iVar12 = func_0x04cfd760(iVar12,iVar3,**(undefined4 **)(_UNK_0311a7d8 + 0x311a310));
  iVar4 = **(int **)(**(int **)(_UNK_0311a7dc + 0x311a32c) + 0x5c);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  uVar14 = *(undefined4 *)(iVar12 + 8);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = FUN_02e651cc(iVar4,uVar14,0);
  if (iVar4 == 0) {
    if (*(int *)(**(int **)(_UNK_0311a7e0 + 0x311a370) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x0202346c(0);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0311a7e4 + 0x311a398));
    func_0x02025440(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 8) = 0x75;
    uVar14 = *(undefined4 *)(iVar12 + 8);
    *(undefined1 *)(iVar5 + 0x25) = 1;
    *(undefined4 *)(iVar5 + 0xc) = uVar14;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x02024d08(iVar4,iVar5,1,0);
    iVar4 = FUN_03118de4(param_1,*(undefined4 *)(iVar12 + 8));
    if (iVar4 == 0) goto LAB_0311a4b8;
    if (0 < *(int *)(iVar12 + 0xc)) {
      iVar4 = 0;
      do {
        iVar5 = FUN_0310c164(param_1);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        uVar14 = *(undefined4 *)(iVar12 + 8);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar5,uVar14,**(undefined4 **)(_UNK_0311a7e8 + 0x311a44c));
        iVar5 = **(int **)(_UNK_0311a7ec + 0x311a460);
        param_1[0x13] = param_1[0x13] + 1;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = FUN_0310ad6c();
        if (iVar5 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x031228fc(iVar5,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar12 + 0xc));
    }
  }
  else {
LAB_0311a4b8:
    uVar14 = *(undefined4 *)(iVar12 + 8);
    uVar7 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = **(int **)(**(int **)(_UNK_0311a7f0 + 0x311a4c4) + 0x5c);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    iStack_40 = 1;
    uStack_60 = 0xdc;
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
  goto LAB_0311a2e8;
LAB_0311a530:
  if (*(int *)(**(int **)(_UNK_0311a7f4 + 0x311a53c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a7f8 + 0x311a558));
  piVar17 = *(int **)(_UNK_0311a7fc + 0x311a56c);
  iVar4 = *piVar17;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
    iVar4 = *piVar17;
  }
  uVar14 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1ac);
  piVar17 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_0311a800 + 0x311a590),1);
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
  if (*(int *)(**(int **)(_UNK_0311a804 + 0x311a61c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_0311a808 + 0x311a638));
  if (*(int *)(**(int **)(_UNK_0311a80c + 0x311a64c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0311a810 + 0x311a668));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  piVar17 = *(int **)(_UNK_0311a814 + 0x311a688);
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
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0311a818 + 0x311a6d4));
    func_0x05096384(iVar5,uVar7,**(undefined4 **)(_UNK_0311a81c + 0x311a6f4),0);
    piVar17 = (int *)(*(int *)(*piVar17 + 0x5c) + 8);
    *piVar17 = iVar5;
    func_0x014385cc(piVar17,iVar5);
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_60 = 0xdc;
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
  pcVar8 = (char *)(_UNK_0311bd00 + 0x311bb5c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311bd04 + 0x311bb70));
    func_0x01438628(*(undefined4 *)(_UNK_0311bd08 + 0x311bb7c));
    func_0x01438628(*(undefined4 *)(_UNK_0311bd0c + 0x311bb88));
    func_0x01438628(*(undefined4 *)(_UNK_0311bd10 + 0x311bb94));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x2b12,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2b12,0);
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
  iVar3 = FUN_0310c164(param_1);
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
  iVar3 = func_0x046c26fc(iVar3,pcVar10,**(undefined4 **)(_UNK_0311bd14 + 0x311bc2c));
  iVar12 = FUN_0310c164(param_1);
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
    if (iVar3 == 0) goto LAB_0311bce0;
    pcVar6 = (code *)func_0x03b70fac(0,pcVar10,**(undefined4 **)(_UNK_0311bd18 + 0x311bcb0));
    func_0x014388e4();
  }
  else {
    if (iVar3 == 0) {
LAB_0311bce0:
      uVar14 = 1;
      iVar3 = **(int **)(_UNK_0311bd24 + 0x311bcf4);
      goto SUB_03b70cd0;
    }
    pcVar6 = (code *)func_0x03b70fac(pcVar13,pcVar10,**(undefined4 **)(_UNK_0311bd1c + 0x311bc84));
  }
  iVar3 = **(int **)(_UNK_0311bd20 + 0x311bcd4);
  goto SUB_03b70fe4;
}

