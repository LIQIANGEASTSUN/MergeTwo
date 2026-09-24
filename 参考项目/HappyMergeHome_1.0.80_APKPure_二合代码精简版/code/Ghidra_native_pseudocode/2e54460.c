
/* WARNING: Possible PIC construction at 0x02e64d34: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02e64460(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,int param_11,int param_12,int *param_13,undefined4 *param_14,
                int param_15)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar12;
  int *unaff_r7;
  char *pcVar13;
  undefined4 *puVar14;
  int unaff_r8;
  int unaff_r9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  int *piStack_78;
  undefined4 *puStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar12 = param_15;
  iVar9 = param_12;
  iVar7 = param_11;
  uVar10 = param_10;
  iVar4 = param_5;
  pcVar13 = (char *)(_UNK_02e650f8 + 0x2e64488);
  uStack_54 = param_9;
  uStack_58 = param_8;
  uStack_5c = param_7;
  uStack_50 = param_6;
  puStack_64 = param_14;
  piStack_60 = param_13;
  iStack_4c = param_1;
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e650fc + 0x2e644d8));
    func_0x01438628(*(undefined4 *)(_UNK_02e65100 + 0x2e644e4));
    func_0x01438628(*(undefined4 *)(_UNK_02e65104 + 0x2e644f0));
    func_0x01438628(*(undefined4 *)(_UNK_02e65108 + 0x2e644fc));
    func_0x01438628(*(undefined4 *)(_UNK_02e6510c + 0x2e64508));
    func_0x01438628(*(undefined4 *)(_UNK_02e65110 + 0x2e64514));
    func_0x01438628(*(undefined4 *)(_UNK_02e65114 + 0x2e64520));
    func_0x01438628(*(undefined4 *)(_UNK_02e65118 + 0x2e6452c));
    func_0x01438628(*(undefined4 *)(_UNK_02e6511c + 0x2e64538));
    func_0x01438628(*(undefined4 *)(_UNK_02e65120 + 0x2e64544));
    func_0x01438628(*(undefined4 *)(_UNK_02e65124 + 0x2e64550));
    func_0x01438628(*(undefined4 *)(_UNK_02e65128 + 0x2e6455c));
    func_0x01438628(*(undefined4 *)(_UNK_02e6512c + 0x2e64568));
    func_0x01438628(*(undefined4 *)(_UNK_02e65130 + 0x2e64574));
    func_0x01438628(*(undefined4 *)(_UNK_02e65134 + 0x2e64580));
    func_0x01438628(*(undefined4 *)(_UNK_02e65138 + 0x2e6458c));
    func_0x01438628(*(undefined4 *)(_UNK_02e6513c + 0x2e64598));
    func_0x01438628(*(undefined4 *)(_UNK_02e65140 + 0x2e645a4));
    func_0x01438628(*(undefined4 *)(_UNK_02e65144 + 0x2e645b0));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x3a3,0);
  iVar3 = iStack_4c;
  if (iVar2 != 0) {
    iVar3 = func_0x029540a4(0x3a3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    piStack_78 = piStack_60;
    puStack_74 = puStack_64;
    iStack_70 = iVar12;
    uStack_6c = 0;
    iStack_98 = iVar4;
    uStack_94 = uStack_50;
    uStack_90 = uStack_5c;
    uStack_8c = uStack_58;
    uStack_88 = uStack_54;
    uStack_84 = uVar10;
    iStack_80 = iVar7;
    iStack_7c = iVar9;
    iVar4 = func_0x028836d0(iVar3,iStack_4c,param_2,param_3);
    return iVar4;
  }
  iVar2 = func_0x02e651cc(iStack_4c,param_2);
  if (iVar2 == 0) {
    piVar5 = *(int **)(_UNK_02e6519c + 0x2e64990);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02e651a0 + 0x2e649ac);
    iVar4 = func_0x04e4a028(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_029a6fa8(iVar4,param_2,0);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == 0x32)) {
      iVar4 = **(int **)(**(int **)(_UNK_02e651a4 + 0x2e649f0) + 0x5c);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      pcVar13 = (char *)(_UNK_02c9c8bc + 0x2c9c7bc);
      if (*pcVar13 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c9c8c0 + 0x2c9c7d0),param_2,0);
        func_0x01438628(*(undefined4 *)(_UNK_02c9c8c4 + 0x2c9c7dc));
        *pcVar13 = '\x01';
      }
      iVar7 = func_0x02953fd4(0x741,0);
      if (iVar7 != 0) {
        iVar7 = func_0x029540a4(0x741,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x024f56c0(&uStack_50,0,param_2,0);
        uStack_38 = uStack_50;
        iStack_34 = iStack_4c;
        iStack_30 = iStack_48;
        uStack_2c = uStack_44;
        uStack_28 = auStack_40[0];
        if (*(int *)(iVar7 + 0x10) != 0) {
          func_0x01523a6c(&uStack_38,*(int *)(iVar7 + 0x10),0);
        }
        func_0x01523a6c(&uStack_38,iVar4,0);
        func_0x01523a2c(&uStack_38,param_2,0);
        iVar9 = *(int *)(iVar7 + 8);
        uVar10 = *(undefined4 *)(iVar7 + 0xc);
        iVar4 = *(int *)(iVar7 + 0x10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar6 = 3;
        if (iVar4 == 0) {
          uVar6 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        iVar4 = func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar6);
        return iVar4;
      }
      iVar7 = func_0x02c97de0(iVar4);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar7 + 0x44);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x046c26fc(iVar7,param_2,**(undefined4 **)(_UNK_02c9c8c8 + 0x2c9c864));
      if (iVar7 == 0) {
        iVar4 = func_0x02c97de0(iVar4);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x44);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar7 = **(int **)(_UNK_02c9c8cc + 0x2c9c8b0);
        if (iVar4 == 0) {
          func_0x024f83d4();
        }
        func_0x046c24b0(iVar4,param_2,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x24));
        pcVar13 = (char *)(_UNK_03b70cbc + 0x3b70bc4);
        if (*pcVar13 == '\0') {
          func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc0 + 0x3b70bd8),
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x28));
          func_0x024f83cc(*(undefined4 *)(_UNK_03b70cc4 + 0x3b70be4));
          *pcVar13 = '\x01';
        }
        piVar5 = *(int **)(_UNK_03b70cc8 + 0x3b70bf8);
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x024f83d8();
        }
        puVar8 = *(undefined4 **)(_UNK_03b70ccc + 0x3b70c14);
        iVar7 = func_0x04e4a028(*puVar8);
        if (iVar7 == 0) {
          func_0x024f83d4();
        }
        uVar11 = *(uint *)(iVar7 + 0x60);
        cVar1 = *(char *)(iVar4 + 0x30);
        *(uint *)(iVar7 + 0x60) = uVar11 + 1;
        *(uint *)(iVar7 + 100) = *(int *)(iVar7 + 100) + (uint)(0xfffffffe < uVar11);
        if (cVar1 != '\0') {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar7 = func_0x04e4a028(*puVar8);
          if (iVar7 == 0) {
            func_0x024f83d4();
          }
          *(undefined1 *)(iVar7 + 0x38) = 1;
        }
        iVar7 = 0;
        if (*(char *)(iVar4 + 0x31) != '\0') {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar4 = func_0x04e4a028(*puVar8);
          if (iVar4 == 0) {
            func_0x024f83d4();
          }
          iVar7 = 1;
          *(undefined1 *)(iVar4 + 0x39) = 1;
        }
        return iVar7;
      }
      return iVar7;
    }
    if (*(int *)(**(int **)(_UNK_02e651a8 + 0x2e64a28) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar14 = *(undefined4 **)(_UNK_02e651ac + 0x2e64a44);
    iVar4 = func_0x04e4a028(*puVar14);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x02bd1624(iVar4,0);
    if (iVar4 == 0) {
      func_0x014388e4();
      func_0x026f6b3c(0,param_2,0);
      func_0x014388e4();
    }
    else {
      func_0x026f6b3c(iVar4,param_2,0);
    }
    func_0x026f6bf8(iVar4,1,0);
    iVar7 = func_0x04e4a028(*puVar14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iStack_98 = 0;
    uStack_94 = 0;
    func_0x02be0bf4(iVar7,iVar4,0,param_3);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(*puVar8);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = FUN_029a6fa8(iVar4,param_2,0);
    if (iVar4 != 0) {
      if (*(int *)(**(int **)(_UNK_02e651b0 + 0x2e64f40) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(*puVar14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      iVar7 = func_0x02bd1270(iVar7,iVar4,0);
      if (iVar7 != 0) {
        if (*(int *)(**(int **)(_UNK_02e651b4 + 0x2e64f8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = func_0x0202346c(0);
        uVar10 = func_0x01524ffc(iVar4 + 8,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uStack_88 = 0;
        uStack_84 = 0;
        iStack_80 = 0;
        iStack_7c = 0;
        piStack_78 = (int *)0x0;
        iStack_98 = 0;
        uStack_94 = 0;
        uStack_90 = 0;
        func_0x020257a4(iVar7,0x22a,uVar10,**(undefined4 **)(_UNK_02e651b8 + 0x2e64fdc));
      }
    }
    if (piStack_60 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_02e651bc + 0x2e6501c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02e651c0 + 0x2e65038));
    piVar5 = *(int **)(_UNK_02e651c4 + 0x2e6504c);
    iVar7 = *piVar5;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar5;
    }
    iVar12 = **(int **)(_UNK_02e651c8 + 0x2e6506c);
    iVar9 = *(int *)(iVar12 + 0x1c);
    uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x10);
    if (iVar9 == 0) {
      func_0x014909d8(iVar12);
      iVar9 = *(int *)(iVar12 + 0x1c);
    }
    iVar7 = *(int *)(iVar9 + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar7 = *(int *)(*(int *)(iVar12 + 0x1c) + 8);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x0149097c();
    }
    piVar5 = (int *)**(int **)(iVar7 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
  }
  else {
    puStack_64 = auStack_40;
    piStack_78 = piStack_60;
    iStack_98 = iVar4;
    uStack_94 = uStack_50;
    uStack_90 = uStack_5c;
    uStack_8c = uStack_58;
    uStack_88 = uStack_54;
    uStack_84 = uVar10;
    iStack_80 = iVar7;
    iStack_7c = iVar9;
    func_0x02e65614(iVar3,param_2,param_3);
    uStack_28 = param_3;
    if (param_2 == 0x66 && iVar12 == 0) {
      iStack_4c = iVar4;
      iVar4 = func_0x019b4c90(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019bfa8c(iVar4,4,param_3,0);
      iVar4 = func_0x0199d2c4(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019a66a4(iVar4,4,param_3,0);
      iVar4 = func_0x019ac0bc(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019b2c40(iVar4,4,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e65148 + 0x2e64b18) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6514c + 0x2e64b34));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024356c8(iVar4,4,param_3,0);
      iVar4 = func_0x01cde938(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x01ce3d18(iVar4,param_3,0);
      iVar4 = func_0x01cecca0(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      piStack_60 = &iStack_30;
      func_0x01cf20a8(iVar4,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e65150 + 0x2e64bbc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iStack_68 = func_0x04e4a028(**(undefined4 **)(_UNK_02e65154 + 0x2e64bd8));
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e65158 + 0x2e64bf0),2);
      iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02e6515c + 0x2e64c08),&uStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar4 != 0) &&
         (iVar3 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
        uVar6 = func_0x01438904();
        func_0x01438790(uVar6,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar4;
      func_0x014385cc(piVar5 + 4,iVar4);
      uVar6 = **(undefined4 **)(_UNK_02e65160 + 0x2e64c78);
      *puStack_64 = uStack_5c;
      puStack_64[1] = uStack_58;
      puStack_64[2] = uStack_54;
      puStack_64[3] = uVar10;
      *piStack_60 = iVar7;
      piStack_60[1] = iVar9;
      uStack_44 = uStack_50;
      iStack_48 = iStack_4c;
      iVar4 = func_0x014387ac(uVar6,&iStack_48);
      if ((iVar4 != 0) &&
         (iVar7 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar7 == 0)) {
        uVar6 = func_0x01438904();
        func_0x01438790(uVar6,0);
      }
      if ((uint)piVar5[3] < 2) {
        func_0x014388e8();
      }
      piVar5[5] = iVar4;
      func_0x014385cc(piVar5 + 5,iVar4);
      iVar4 = iStack_68;
      if (iStack_68 == 0) {
        func_0x014388e4();
      }
      puVar8 = *(undefined4 **)(_UNK_02e65164 + 0x2e64d28);
    }
    else {
      if (param_2 != 0x387 || iVar12 != 0) {
        if (iVar12 != 0) {
          return 0x387;
        }
        if (*(int *)(**(int **)(_UNK_02e65188 + 0x2e64d4c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6518c + 0x2e64d68));
        piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e65190 + 0x2e64d80),2);
        puVar8 = *(undefined4 **)(_UNK_02e65194 + 0x2e64d98);
        iStack_48 = param_2;
        iVar7 = func_0x014387ac(*puVar8,&iStack_48);
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar7 != 0) &&
           (iVar9 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
          uVar10 = func_0x01438904();
          func_0x01438790(uVar10,0);
        }
        if (piVar5[3] == 0) {
          func_0x014388e8();
        }
        piVar5[4] = iVar7;
        func_0x014385cc(piVar5 + 4,iVar7);
        iVar7 = func_0x014387ac(*puVar8,&uStack_28);
        if ((iVar7 != 0) &&
           (iVar9 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar5 + 0x20)), iVar9 == 0)) {
          uVar10 = func_0x01438904();
          func_0x01438790(uVar10,0);
        }
        if ((uint)piVar5[3] < 2) {
          func_0x014388e8();
        }
        piVar5[5] = iVar7;
        func_0x014385cc(piVar5 + 5,iVar7);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x029901b4(iVar4,**(undefined4 **)(_UNK_02e65198 + 0x2e64e7c),piVar5,0);
        return iVar4;
      }
      iStack_4c = iVar4;
      iVar4 = func_0x019b4c90(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019bfa8c(iVar4,4,param_3,0);
      iVar4 = func_0x0199d2c4(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019a66a4(iVar4,4,param_3,0);
      iVar4 = func_0x019ac0bc(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x019b2c40(iVar4,4,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e65168 + 0x2e64774) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6516c + 0x2e64790));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024356c8(iVar4,4,param_3,0);
      iVar4 = func_0x01cde938(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x01ce3d18(iVar4,param_3,0);
      iVar4 = func_0x01cecca0(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      piStack_60 = &iStack_30;
      func_0x01cf20a8(iVar4,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e65170 + 0x2e64818) + 0x74) == 0) {
        func_0x014387a4();
      }
      iStack_68 = func_0x04e4a028(**(undefined4 **)(_UNK_02e65174 + 0x2e64834));
      piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e65178 + 0x2e6484c),2);
      iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02e6517c + 0x2e64864),&uStack_28);
      if (piVar5 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar4 != 0) &&
         (iVar3 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
        uVar6 = func_0x01438904();
        func_0x01438790(uVar6,0);
      }
      if (piVar5[3] == 0) {
        func_0x014388e8();
      }
      piVar5[4] = iVar4;
      func_0x014385cc(piVar5 + 4,iVar4);
      uVar6 = **(undefined4 **)(_UNK_02e65180 + 0x2e648d4);
      *puStack_64 = uStack_5c;
      puStack_64[1] = uStack_58;
      puStack_64[2] = uStack_54;
      puStack_64[3] = uVar10;
      *piStack_60 = iVar7;
      piStack_60[1] = iVar9;
      uStack_44 = uStack_50;
      iStack_48 = iStack_4c;
      iVar4 = func_0x014387ac(uVar6,&iStack_48);
      if ((iVar4 != 0) &&
         (iVar7 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar7 == 0)) {
        uVar6 = func_0x01438904();
        func_0x01438790(uVar6,0);
      }
      if ((uint)piVar5[3] < 2) {
        func_0x014388e8();
      }
      piVar5[5] = iVar4;
      func_0x014385cc(piVar5 + 5,iVar4);
      iVar4 = iStack_68;
      if (iStack_68 == 0) {
        func_0x014388e4();
      }
      puVar8 = *(undefined4 **)(_UNK_02e65184 + 0x2e64984);
    }
    uVar6 = *puVar8;
    unaff_lr = 0x2e64d38;
    unaff_r4 = param_3;
    unaff_r5 = param_2;
    unaff_r6 = iVar4;
    unaff_r7 = piVar5;
    unaff_r8 = iVar12;
    unaff_r9 = iVar9;
    unaff_r11 = uVar10;
    register0x00000054 = (BADSPACEBASE *)&iStack_98;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar13 = (char *)(_UNK_02990590 + 0x2990434);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02990594 + 0x2990448),uVar6,piVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_02990598 + 0x2990454));
    func_0x01438628(*(undefined4 *)(_UNK_0299059c + 0x2990460));
    *pcVar13 = '\x01';
  }
  iVar7 = func_0x02953fd4(0x21f,0);
  if (iVar7 == 0) {
    iVar7 = *(int *)(iVar4 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x04753c80(iVar7,uVar6,**(undefined4 **)(_UNK_029905a0 + 0x29904d8));
    iVar9 = 0;
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar4 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      puVar8 = *(undefined4 **)(_UNK_029905a4 + 0x2990510);
      iVar7 = func_0x0475399c(iVar7,uVar6,*puVar8);
      if (iVar7 != 0) {
        uVar10 = func_0x014388d4(**(undefined4 **)(_UNK_029905a8 + 0x2990528));
        FUN_0298fd74(uVar10,uVar6,piVar5);
        iVar4 = *(int *)(iVar4 + 0x14);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x0475399c(iVar4,uVar6,*puVar8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        (**(code **)(iVar4 + 0xc))
                  (*(undefined4 *)(iVar4 + 0x20),uVar10,*(undefined4 *)(iVar4 + 0x14));
        iVar9 = 1;
      }
    }
  }
  else {
    iVar7 = func_0x029540a4(0x21f,0);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    iVar9 = func_0x02871898(iVar7,iVar4,uVar6,piVar5);
  }
  return iVar9;
}

