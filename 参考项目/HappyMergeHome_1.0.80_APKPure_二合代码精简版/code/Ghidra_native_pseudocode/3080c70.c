
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03090c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int aiStack_28 [3];
  
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_030885d4 + 0x3087e34);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030885d8 + 0x3087e48),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_030885dc + 0x3087e54));
    func_0x01438628(*(undefined4 *)(_UNK_030885e0 + 0x3087e60));
    func_0x01438628(*(undefined4 *)(_UNK_030885e4 + 0x3087e6c));
    func_0x01438628(*(undefined4 *)(_UNK_030885e8 + 0x3087e78));
    func_0x01438628(*(undefined4 *)(_UNK_030885ec + 0x3087e84));
    func_0x01438628(*(undefined4 *)(_UNK_030885f0 + 0x3087e90));
    func_0x01438628(*(undefined4 *)(_UNK_030885f4 + 0x3087e9c));
    func_0x01438628(*(undefined4 *)(_UNK_030885f8 + 0x3087ea8));
    func_0x01438628(*(undefined4 *)(_UNK_030885fc + 0x3087eb4));
    func_0x01438628(*(undefined4 *)(_UNK_03088600 + 0x3087ec0));
    func_0x01438628(*(undefined4 *)(_UNK_03088604 + 0x3087ecc));
    func_0x01438628(*(undefined4 *)(_UNK_03088608 + 0x3087ed8));
    func_0x01438628(*(undefined4 *)(_UNK_0308860c + 0x3087ee4));
    func_0x01438628(*(undefined4 *)(_UNK_03088610 + 0x3087ef0));
    func_0x01438628(*(undefined4 *)(_UNK_03088614 + 0x3087efc));
    func_0x01438628(*(undefined4 *)(_UNK_03088618 + 0x3087f08));
    func_0x01438628(*(undefined4 *)(_UNK_0308861c + 0x3087f14));
    func_0x01438628(*(undefined4 *)(_UNK_03088620 + 0x3087f20));
    func_0x01438628(*(undefined4 *)(_UNK_03088624 + 0x3087f2c));
    func_0x01438628(*(undefined4 *)(_UNK_03088628 + 0x3087f38));
    func_0x01438628(*(undefined4 *)(_UNK_0308862c + 0x3087f44));
    func_0x01438628(*(undefined4 *)(_UNK_03088630 + 0x3087f50));
    func_0x01438628(*(undefined4 *)(_UNK_03088634 + 0x3087f5c));
    func_0x01438628(*(undefined4 *)(_UNK_03088638 + 0x3087f68));
    func_0x01438628(*(undefined4 *)(_UNK_0308863c + 0x3087f74));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x755b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03088640 + 0x3087fd8));
    func_0x03090c9c(iVar1,0);
    iVar3 = FUN_0307f35c(iVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03088644 + 0x3088030));
    if (iVar3 == 0) {
      iVar3 = FUN_0307f35c(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_03088648 + 0x3088080));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0308864c + 0x3088094));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_03088650 + 0x30880a8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_030804e0(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_03088654 + 0x3088104));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03088658 + 0x3088138);
        while( true ) {
          iVar10 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = aiStack_28[0];
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0308865c + 0x30881d8));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_03088660 + 0x3088228);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_03088664 + 0x3088288));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_03088668 + 0x308829c));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0308866c + 0x30882e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0307cfc8();
        if (iVar9 != 0) {
          func_0x03091fb8(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_03088670 + 0x3088310) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03088674 + 0x3088330));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03088678 + 0x3088368);
        piVar13 = *(int **)(_UNK_0308867c + 0x3088370);
        while( true ) {
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cfd760(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar10 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x2f4,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03088680 + 0x30884cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_03088684 + 0x30884e8));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_03088688 + 0x30884fc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0308868c + 0x308851c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03088690 + 0x308853c));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_03088694 + 0x308855c),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xee,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_03088698 + 0x3088464);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0308869c + 0x3088480);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_030886a0 + 0x3088494));
      *pcVar8 = '\x01';
    }
    iVar9 = *piVar14;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x014387a4();
      iVar9 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x755b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

