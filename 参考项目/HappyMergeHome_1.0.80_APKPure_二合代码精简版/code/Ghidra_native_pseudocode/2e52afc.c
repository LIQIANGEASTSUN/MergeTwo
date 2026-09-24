
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e62afc(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,int param_13)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iStack_3c;
  int aiStack_38 [3];
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02e63758 + 0x2e62b1c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e6375c + 0x2e62b30));
    func_0x01438628(*(undefined4 *)(_UNK_02e63760 + 0x2e62b3c));
    func_0x01438628(*(undefined4 *)(_UNK_02e63764 + 0x2e62b48));
    func_0x01438628(*(undefined4 *)(_UNK_02e63768 + 0x2e62b54));
    func_0x01438628(*(undefined4 *)(_UNK_02e6376c + 0x2e62b60));
    func_0x01438628(*(undefined4 *)(_UNK_02e63770 + 0x2e62b6c));
    func_0x01438628(*(undefined4 *)(_UNK_02e63774 + 0x2e62b78));
    func_0x01438628(*(undefined4 *)(_UNK_02e63778 + 0x2e62b84));
    func_0x01438628(*(undefined4 *)(_UNK_02e6377c + 0x2e62b90));
    func_0x01438628(*(undefined4 *)(_UNK_02e63780 + 0x2e62b9c));
    func_0x01438628(*(undefined4 *)(_UNK_02e63784 + 0x2e62ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02e63788 + 0x2e62bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02e6378c + 0x2e62bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02e63790 + 0x2e62bcc));
    func_0x01438628(*(undefined4 *)(_UNK_02e63794 + 0x2e62bd8));
    func_0x01438628(*(undefined4 *)(_UNK_02e63798 + 0x2e62be4));
    func_0x01438628(*(undefined4 *)(_UNK_02e6379c + 0x2e62bf0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xb8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xb8d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02882124(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,
                    param_11,param_12,param_13,0);
    return;
  }
  iVar1 = **(int **)(**(int **)(_UNK_02e637a0 + 0x2e62ca8) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02e61f28(iVar1,param_2);
  if (param_2 < 0x3a2) {
    if (1 < param_2 - 0xc9U) {
      if (param_2 != 0x65) goto LAB_02e62e48;
      iVar5 = func_0x01c988e8(0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x01c9ec5c(iVar5,param_3,0);
      iVar5 = func_0x01c8d8d0(0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x01c95ae4(iVar5,param_3,0);
      iVar5 = func_0x01ca5be0(0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x01ca82a4(iVar5,param_3,0);
      func_0x02e6382c(param_1,0x65,iVar1 - param_3);
      if (param_13 != 0) goto LAB_02e6366c;
      iVar1 = func_0x019b4c90(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019bfa8c(iVar1,7,param_3,0,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                      param_12);
      iVar1 = func_0x0199d2c4(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019a66a4(iVar1,7,param_3,0);
      iVar1 = func_0x019ac0bc(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x019b2c40(iVar1,7,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e637a4 + 0x2e62ffc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637a8 + 0x2e63018));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024356c8(iVar1,7,param_3,0);
      if (*(int *)(**(int **)(_UNK_02e637ac + 0x2e6304c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637b0 + 0x2e63068));
      piVar4 = *(int **)(_UNK_02e637b4 + 0x2e6307c);
      iVar5 = *piVar4;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
        iVar5 = *piVar4;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x8c);
      piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e637b8 + 0x2e630a0),2);
      iStack_28 = 6;
      iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e637bc + 0x2e630c0),&iStack_28);
      if (piVar4 == (int *)0x0) {
        func_0x014388e4();
      }
      if ((iVar5 != 0) &&
         (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
        uVar2 = func_0x01438904();
        func_0x01438790(uVar2,0);
      }
      if (piVar4[3] == 0) {
        func_0x014388e8();
      }
      piVar4[4] = iVar5;
      func_0x014385cc(piVar4 + 4,iVar5);
      iStack_2c = param_3;
      iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e637c0 + 0x2e63134),&iStack_2c);
      if ((iVar5 != 0) &&
         (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)) {
        uVar2 = func_0x01438904();
        func_0x01438790(uVar2,0);
      }
      if ((uint)piVar4[3] < 2) {
        func_0x014388e8();
      }
      piVar4[5] = iVar5;
      func_0x014385cc(piVar4 + 5,iVar5);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar1,uVar7,piVar4,0);
      goto LAB_02e631b4;
    }
    if (*(int *)(**(int **)(_UNK_02e637f8 + 0x2e62cf4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637fc + 0x2e62d10));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02ca4f0c(iVar1,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12
                    ,0);
    if (param_13 != 0) goto LAB_02e6366c;
  }
  else {
    iVar5 = 0x3a2;
    if (param_2 != 0x3a2) {
      iVar5 = 0x3bf;
    }
    if (param_2 == 0x3a2 || param_2 == iVar5) {
      if (*(int *)(**(int **)(_UNK_02e637e8 + 0x2e62d90) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637ec + 0x2e62dac));
      iVar9 = **(int **)(_UNK_02e637f0 + 0x2e62dc0);
      iVar6 = *(int *)(iVar9 + 0x1c);
      if (iVar6 == 0) {
        func_0x014909d8(iVar9);
        iVar6 = *(int *)(iVar9 + 0x1c);
      }
      iVar6 = *(int *)(iVar6 + 8);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x0149097c();
      }
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x0149097c();
      }
      uVar7 = **(undefined4 **)(iVar6 + 0x5c);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar5,**(undefined4 **)(_UNK_02e637f4 + 0x2e62e3c),uVar7,0);
    }
LAB_02e62e48:
    func_0x02e6382c(param_1,param_2,iVar1 - param_3);
    if (param_13 != 0) goto LAB_02e6366c;
LAB_02e631b4:
    if (*(int *)(**(int **)(_UNK_02e637c4 + 0x2e631c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637c8 + 0x2e631dc));
    piVar4 = *(int **)(_UNK_02e637cc + 0x2e631f0);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar4;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
    piVar3 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e637d0 + 0x2e63218),3);
    iStack_28 = 3;
    iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e637d4 + 0x2e63238),&iStack_28);
    if (piVar3 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if (piVar3[3] == 0) {
      func_0x014388e8();
    }
    piVar3[4] = iVar5;
    func_0x014385cc(piVar3 + 4,iVar5);
    puVar10 = *(undefined4 **)(_UNK_02e637d8 + 0x2e632ac);
    iStack_2c = param_2;
    iVar5 = func_0x014387ac(*puVar10,&iStack_2c);
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x014388e8();
    }
    piVar3[5] = iVar5;
    func_0x014385cc(piVar3 + 5,iVar5);
    aiStack_38[2] = param_3;
    iVar5 = func_0x014387ac(*puVar10,aiStack_38 + 2);
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if ((uint)piVar3[3] < 3) {
      func_0x014388e8();
    }
    piVar3[6] = iVar5;
    func_0x014385cc(piVar3 + 6,iVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar7,piVar3,0);
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e637dc + 0x2e63394));
    uVar7 = *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 0x30);
    piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e637e0 + 0x2e633b4),3);
    aiStack_38[1] = 3;
    iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e637e4 + 0x2e633d4),aiStack_38 + 1);
    if (piVar4 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if (piVar4[3] == 0) {
      func_0x014388e8();
    }
    piVar4[4] = iVar5;
    func_0x014385cc(piVar4 + 4,iVar5);
    aiStack_38[0] = param_2;
    iVar5 = func_0x014387ac(*puVar10,aiStack_38);
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if ((uint)piVar4[3] < 2) {
      func_0x014388e8();
    }
    piVar4[5] = iVar5;
    func_0x014385cc(piVar4 + 5,iVar5);
    iStack_3c = param_3;
    iVar5 = func_0x014387ac(*puVar10,&iStack_3c);
    if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0)
       ) {
      uVar2 = func_0x01438904();
      func_0x01438790(uVar2,0);
    }
    if ((uint)piVar4[3] < 3) {
      func_0x014388e8();
    }
    piVar4[6] = iVar5;
    func_0x014385cc(piVar4 + 6,iVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar1,uVar7,piVar4,0);
  }
  if (*(int *)(**(int **)(_UNK_02e63800 + 0x2e63528) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e63804 + 0x2e63544));
  piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e63808 + 0x2e6355c),2);
  iStack_28 = param_2;
  iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e6380c + 0x2e63574),&iStack_28);
  if (piVar4 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar4[3] == 0) {
    func_0x014388e8();
  }
  piVar4[4] = iVar5;
  func_0x014385cc(piVar4 + 4,iVar5);
  iStack_2c = param_3;
  iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e63810 + 0x2e635e4),&iStack_2c);
  if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if ((uint)piVar4[3] < 2) {
    func_0x014388e8();
  }
  piVar4[5] = iVar5;
  func_0x014385cc(piVar4 + 5,iVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x029901b4(iVar1,**(undefined4 **)(_UNK_02e63814 + 0x2e63664),piVar4,0);
LAB_02e6366c:
  if (*(int *)(**(int **)(_UNK_02e63818 + 0x2e63678) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02e6381c + 0x2e63694));
  piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02e63820 + 0x2e636ac),1);
  iStack_28 = param_2;
  iVar5 = func_0x014387ac(**(undefined4 **)(_UNK_02e63824 + 0x2e636c4),&iStack_28);
  if (piVar4 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((iVar5 != 0) && (iVar6 = func_0x014387a8(iVar5,*(undefined4 *)(*piVar4 + 0x20)), iVar6 == 0))
  {
    uVar7 = func_0x01438904();
    func_0x01438790(uVar7,0);
  }
  if (piVar4[3] == 0) {
    func_0x014388e8();
  }
  piVar4[4] = iVar5;
  func_0x014385cc(piVar4 + 4,iVar5);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar1,**(undefined4 **)(_UNK_02e63828 + 0x2e63748),piVar4,0);
  return;
}

