
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc60e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar5 = (char *)(_UNK_01cc68b8 + 0x1cc6110);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc68bc + 0x1cc6124));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68c0 + 0x1cc6130));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68c4 + 0x1cc613c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68c8 + 0x1cc6148));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68cc + 0x1cc6154));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68d0 + 0x1cc6160));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68d4 + 0x1cc616c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68d8 + 0x1cc6178));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68dc + 0x1cc6184));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68e0 + 0x1cc6190));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68e4 + 0x1cc619c));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68e8 + 0x1cc61a8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68ec + 0x1cc61b4));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68f0 + 0x1cc61c0));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68f4 + 0x1cc61cc));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68f8 + 0x1cc61d8));
    func_0x01438628(*(undefined4 *)(_UNK_01cc68fc + 0x1cc61e4));
    *pcVar5 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  iVar1 = func_0x02953fd4(0x969,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01cc6900 + 0x1cc6264));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar1 + 0xc) = param_1;
    func_0x014385cc((int *)(iVar1 + 0xc),param_1);
    piVar9 = *(int **)(_UNK_01cc6904 + 0x1cc629c);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar9;
    }
    iVar8 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
    if (iVar8 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar9;
      }
      uVar6 = **(undefined4 **)(iVar2 + 0x5c);
      iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01cc6908 + 0x1cc62e4));
      func_0x0152e3ec(iVar8,uVar6,**(undefined4 **)(_UNK_01cc690c + 0x1cc6304),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x10);
      *piVar9 = iVar8;
      func_0x014385cc(piVar9,iVar8);
    }
    if (*(int *)(**(int **)(_UNK_01cc6910 + 0x1cc632c) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x029a9e10(0x3f800000,iVar8,0);
    piVar9 = *(int **)(_UNK_01cc6914 + 0x1cc635c);
    *(undefined1 *)(param_1 + 0x45) = 1;
    iVar2 = *piVar9;
    iVar8 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar8;
    iVar2 = *(int *)(iVar2 + 0x74);
    *(int *)(iVar1 + 8) = iVar8;
    if (iVar2 == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01cc6918 + 0x1cc638c));
    piVar9 = *(int **)(_UNK_01cc691c + 0x1cc63a0);
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x240);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01cc6920 + 0x1cc63c4),1);
    uStack_4c = *(undefined4 *)(iVar1 + 8);
    iVar8 = func_0x014387ac(**(undefined4 **)(_UNK_01cc6924 + 0x1cc63e4),&uStack_4c);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar8 != 0) && (iVar3 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)
       ) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if (piVar9[3] == 0) {
      func_0x014388e8();
    }
    piVar9[4] = iVar8;
    func_0x014385cc(piVar9 + 4,iVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar2,uVar6,piVar9,0);
    iVar2 = func_0x02b1cc10(0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024eecb8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024efc6c(&uStack_58,iVar2,param_3,param_4,param_5,0);
    uVar4 = uStack_50;
    uVar6 = uStack_58;
    fVar14 = fStack_54 + -20.0;
    if (*(int *)(**(int **)(_UNK_01cc6928 + 0x1cc64d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01cc692c + 0x1cc64fc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b795d0(iVar2,uVar6,fVar14,uVar4,param_2,0,0);
    if (*(int *)(**(int **)(_UNK_01cc6930 + 0x1cc6548) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar8 = func_0x024ef144(iVar2,0,0);
    if (iVar8 != 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024ef308(iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef328(iVar2,0x3f266666,0x3f266666,0x3f266666,0);
    }
    piVar9 = *(int **)(_UNK_01cc6934 + 0x1cc65c4);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x0152adfc(param_2,4,0);
    fVar14 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar5 = (char *)(_UNK_01cc6938 + 0x1cc65f8);
    fVar15 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01cc693c + 0x1cc6614));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar15 = (float)func_0x024f04b4(fVar14 / fVar15);
    fVar14 = _UNK_01cc68b4;
    uVar13 = in_fpscr & 0xfffffff | (uint)(fVar15 == _UNK_01cc68b0) << 0x1e;
    iVar2 = (int)fVar15;
    if (SUB41(uVar13 >> 0x1e,0)) {
      iVar2 = -0x80000000;
    }
    if (0 < param_2) {
      uVar11 = 0;
      do {
        iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01cc6940 + 0x1cc6684));
        func_0x024eeca8(iVar8,0);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar8 + 0x1c) = iVar1;
        func_0x014385cc((int *)(iVar8 + 0x1c),iVar1);
        *(int *)(iVar8 + 0x14) = iVar2;
        *(undefined1 *)(iVar8 + 0x18) = 0;
        if (iVar2 < param_2) {
          param_2 = param_2 - iVar2;
        }
        else {
          *(int *)(iVar8 + 0x14) = param_2;
          param_2 = 0;
          *(undefined1 *)(iVar8 + 0x18) = 1;
        }
        iVar3 = **(int **)(**(int **)(_UNK_01cc6944 + 0x1cc66e4) + 0x5c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x70);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if ((uVar11 & 1) == 0) {
          iVar3 = *(int *)(iVar3 + 0x88);
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x8c);
        }
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024ef308(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_58,iVar3,0);
        uStack_48 = CONCAT44(fStack_54,uStack_58);
        uStack_40 = uStack_50;
        iVar3 = **(int **)(_UNK_01cc6948 + 0x1cc676c);
        *(undefined4 *)(iVar8 + 0x10) = uStack_50;
        *(undefined8 *)(iVar8 + 8) = uStack_48;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01cc694c + 0x1cc6798));
        uVar6 = func_0x01cc6f0c();
        uVar7 = *(undefined4 *)(iVar8 + 8);
        uVar10 = *(undefined4 *)(iVar8 + 0xc);
        uVar12 = *(undefined4 *)(iVar8 + 0x10);
        uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01cc6950 + 0x1cc67bc));
        func_0x0152e3ec(uVar4,iVar8,**(undefined4 **)(_UNK_01cc6954 + 0x1cc67d8),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar15 = (float)VectorSignedToFloat(uVar11,(byte)(uVar13 >> 0x16) & 3);
        func_0x02b777e0(iVar3,uVar6,param_3,param_4,param_5,uVar7,uVar10,uVar12,1,0x3f99999a,
                        fVar15 * fVar14,uVar4,0x3f666666,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        uVar11 = uVar11 + 1;
      } while (0 < param_2);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x969,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871c20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

