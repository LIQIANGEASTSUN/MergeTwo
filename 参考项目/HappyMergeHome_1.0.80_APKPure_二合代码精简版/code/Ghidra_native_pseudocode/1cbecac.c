
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ccecac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar8 = (char *)(_UNK_01ccf58c + 0x1ccecd8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccf590 + 0x1ccecec));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf594 + 0x1ccecf8));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf598 + 0x1cced04));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf59c + 0x1cced10));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5a0 + 0x1cced1c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5a4 + 0x1cced28));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5a8 + 0x1cced34));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5ac + 0x1cced40));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5b0 + 0x1cced4c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5b4 + 0x1cced58));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5b8 + 0x1cced64));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5bc + 0x1cced70));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5c0 + 0x1cced7c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5c4 + 0x1cced88));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5c8 + 0x1cced94));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5cc + 0x1cceda0));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5d0 + 0x1ccedac));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5d4 + 0x1ccedb8));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5d8 + 0x1ccedc4));
    func_0x01438628(*(undefined4 *)(_UNK_01ccf5dc + 0x1ccedd0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x939,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01ccf5e0 + 0x1ccee40));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(int *)(iVar1 + 0xc) = param_1;
    func_0x014385cc((int *)(iVar1 + 0xc),param_1);
    piVar9 = *(int **)(_UNK_01ccf5e4 + 0x1ccee78);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar9;
    }
    iVar11 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x14);
    if (iVar11 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar9;
      }
      uVar12 = **(undefined4 **)(iVar2 + 0x5c);
      iVar11 = func_0x014388d4(**(undefined4 **)(_UNK_01ccf5e8 + 0x1cceec0));
      func_0x0152e3ec(iVar11,uVar12,**(undefined4 **)(_UNK_01ccf5ec + 0x1cceee0),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0x14);
      *piVar9 = iVar11;
      func_0x014385cc(piVar9,iVar11);
    }
    if (*(int *)(**(int **)(_UNK_01ccf5f0 + 0x1ccef08) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x029a9e10(0x3f800000,iVar11,0);
    piVar9 = *(int **)(_UNK_01ccf5f4 + 0x1ccef38);
    *(undefined1 *)(param_1 + 0x48) = 1;
    iVar2 = *piVar9;
    iVar11 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = iVar11;
    iVar2 = *(int *)(iVar2 + 0x74);
    *(int *)(iVar1 + 8) = iVar11;
    if (iVar2 == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ccf5f8 + 0x1ccef68));
    piVar9 = *(int **)(_UNK_01ccf5fc + 0x1ccef7c);
    iVar11 = *piVar9;
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x014387a4();
      iVar11 = *piVar9;
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x350);
    piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01ccf600 + 0x1ccefa0),1);
    uStack_58 = *(undefined4 *)(iVar1 + 8);
    iVar11 = func_0x014387ac(**(undefined4 **)(_UNK_01ccf604 + 0x1ccefc0),&uStack_58);
    if (piVar9 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar11 != 0) &&
       (iVar3 = func_0x014387a8(iVar11,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)) {
      uVar4 = func_0x01438904();
      func_0x01438790(uVar4,0);
    }
    if (piVar9[3] == 0) {
      func_0x014388e8();
    }
    piVar9[4] = iVar11;
    func_0x014385cc(piVar9 + 4,iVar11);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar2,uVar12,piVar9,0);
    iVar2 = func_0x02b1cc10(0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024eecb8(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024efc6c(&uStack_48,iVar2,param_3,param_4,param_5,0);
    uVar4 = uStack_40;
    uVar12 = (undefined4)uStack_48;
    fVar16 = uStack_48._4_4_ + -20.0;
    if (*(int *)(**(int **)(_UNK_01ccf608 + 0x1ccf0b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ccf60c + 0x1ccf0dc));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b795d0(iVar2,uVar12,fVar16,uVar4,param_2,0,0);
    if (*(int *)(**(int **)(_UNK_01ccf610 + 0x1ccf128) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar11 = func_0x024ef144(iVar2,0,0);
    if (iVar11 != 0) {
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024ef308(iVar2,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef328(iVar2,0x3f266666,0x3f266666,0x3f266666,0);
    }
    piVar9 = *(int **)(_UNK_01ccf614 + 0x1ccf1a4);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar12 = func_0x0152adfc(param_2,4,0);
    fVar16 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    pcVar8 = (char *)(_UNK_01ccf618 + 0x1ccf1d8);
    fVar17 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01ccf61c + 0x1ccf1f4));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar17 = (float)func_0x024f04b4(fVar16 / fVar17);
    fVar16 = _UNK_01ccf588;
    uVar15 = in_fpscr & 0xfffffff | (uint)(fVar17 == _UNK_01ccf584) << 0x1e;
    iVar2 = (int)fVar17;
    if (SUB41(uVar15 >> 0x1e,0)) {
      iVar2 = -0x80000000;
    }
    if (0 < param_2) {
      iVar11 = 0;
      do {
        iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01ccf620 + 0x1ccf268));
        func_0x024eeca8(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar3 + 0x1c) = iVar1;
        func_0x014385cc((int *)(iVar3 + 0x1c));
        *(int *)(iVar3 + 0x14) = iVar2;
        *(undefined1 *)(iVar3 + 0x18) = 0;
        if (iVar2 < param_2) {
          param_2 = param_2 - iVar2;
        }
        else {
          *(int *)(iVar3 + 0x14) = param_2;
          param_2 = 0;
          *(undefined1 *)(iVar3 + 0x18) = 1;
        }
        if (*(char *)(_UNK_01ccf624 + 0x1ccf2c8) == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01ccf628 + 0x1ccf2dc));
          *(undefined1 *)(_UNK_01ccf62c + 0x1ccf2e8) = 1;
        }
        puVar7 = *(undefined8 **)(**(int **)(_UNK_01ccf630 + 0x1ccf2f4) + 0x5c);
        uVar18 = *puVar7;
        piVar9 = *(int **)(_UNK_01ccf634 + 0x1ccf308);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(puVar7 + 1);
        iVar5 = *piVar9;
        *(undefined8 *)(iVar3 + 8) = uVar18;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01ccf638 + 0x1ccf330));
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03579aec(iVar5,**(undefined4 **)(_UNK_01ccf640 + 0x1ccf35c),
                                **(undefined4 **)(_UNK_01ccf63c + 0x1ccf350));
        if (*(int *)(**(int **)(_UNK_01ccf644 + 0x1ccf374) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x024ef144(iVar5,0,0);
        if (iVar6 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar12 = *(undefined4 *)(iVar5 + 0x20);
          if (*(int *)(**(int **)(_UNK_01ccf648 + 0x1ccf3b4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x024ef144(uVar12,0,0);
          if (iVar6 != 0) {
            iVar5 = *(int *)(iVar5 + 0x20);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024ef308(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_58,iVar5,0);
            uStack_48 = CONCAT44(uStack_54,uStack_58);
            uStack_40 = uStack_50;
            *(undefined4 *)(iVar3 + 0x10) = uStack_50;
            *(undefined8 *)(iVar3 + 8) = uStack_48;
          }
        }
        if (*(int *)(**(int **)(_UNK_01ccf64c + 0x1ccf448) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01ccf650 + 0x1ccf464));
        uVar12 = func_0x01ccff4c();
        uVar13 = *(undefined4 *)(iVar3 + 8);
        uVar14 = *(undefined4 *)(iVar3 + 0xc);
        uVar10 = *(undefined4 *)(iVar3 + 0x10);
        uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01ccf654 + 0x1ccf48c));
        func_0x0152e3ec(uVar4,iVar3,**(undefined4 **)(_UNK_01ccf658 + 0x1ccf4a8),0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        fVar17 = (float)VectorSignedToFloat(iVar11,(byte)(uVar15 >> 0x16) & 3);
        func_0x02b777e0(iVar5,uVar12,param_3,param_4,param_5,uVar13,uVar14,uVar10,1,0x3f99999a,
                        fVar17 * fVar16,uVar4,0x3f666666,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        iVar11 = iVar11 + 1;
      } while (0 < param_2);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x939,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871c20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

