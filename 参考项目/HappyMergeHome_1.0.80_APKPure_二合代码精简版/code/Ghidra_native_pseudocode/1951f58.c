
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01961f58(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  float fStack_58;
  float fStack_54;
  float fStack_4c;
  
  pcVar14 = (char *)(_UNK_019623d0 + 0x1961f80);
  if (*pcVar14 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019623d4 + 0x1961f94));
    func_0x01438628(*(undefined4 *)(_UNK_019623d8 + 0x1961fa0));
    func_0x01438628(*(undefined4 *)(_UNK_019623dc + 0x1961fac));
    func_0x01438628(*(undefined4 *)(_UNK_019623e0 + 0x1961fb8));
    func_0x01438628(*(undefined4 *)(_UNK_019623e4 + 0x1961fc4));
    func_0x01438628(*(undefined4 *)(_UNK_019623e8 + 0x1961fd0));
    func_0x01438628(*(undefined4 *)(_UNK_019623ec + 0x1961fdc));
    func_0x01438628(*(undefined4 *)(_UNK_019623f0 + 0x1961fe8));
    func_0x01438628(*(undefined4 *)(_UNK_019623f4 + 0x1961ff4));
    func_0x01438628(*(undefined4 *)(_UNK_019623f8 + 0x1962000));
    func_0x01438628(*(undefined4 *)(_UNK_019623fc + 0x196200c));
    *pcVar14 = '\x01';
  }
  fStack_4c = 0.0;
  iVar5 = func_0x02953fd4(0x3bcb,0);
  if (iVar5 == 0) {
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01962400 + 0x1962078));
    func_0x0197176c(iVar5,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar5 + 0xc) = param_1;
    func_0x014385cc((undefined4 *)(iVar5 + 0xc),param_1);
    iVar6 = FUN_019594e8(param_1);
    if (iVar6 != 0) {
      func_0x0196242c(&fStack_58,param_1,param_2);
      fStack_4c = fStack_58;
      iVar6 = *(int *)(**(int **)(_UNK_01962404 + 0x19620d0) + 0x74);
      *(float *)(iVar5 + 0x10) = fStack_54;
      if (iVar6 == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_01962408 + 0x19620fc));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03579aec(iVar6,**(undefined4 **)(_UNK_01962410 + 0x1962128),
                              **(undefined4 **)(_UNK_0196240c + 0x196211c));
      *(undefined4 *)(iVar5 + 8) = 8;
      fVar2 = _UNK_019623cc;
      fVar1 = _UNK_019623c8;
      fVar7 = fStack_4c;
      if (0 < (int)fStack_4c) {
        fVar7 = *(float *)(iVar5 + 0x10);
      }
      if (0 < (int)fVar7) {
        iVar16 = 0;
        do {
          iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_01962414 + 0x196216c));
          func_0x01971774(iVar8,0);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          piVar15 = (int *)(iVar8 + 0xc);
          *piVar15 = iVar5;
          func_0x014385cc(piVar15,iVar5);
          *(int *)(iVar8 + 8) = iVar16;
          iVar9 = FUN_01961c64(param_1);
          fVar7 = fStack_4c;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar9,fVar7,**(undefined4 **)(_UNK_01962418 + 0x19621cc));
          iVar9 = *piVar15;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (iVar16 < *(int *)(iVar9 + 8)) {
            fVar10 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar11 = (float)func_0x024ef2c8(0xbe4ccccd,0x3e4ccccd,0);
            fVar7 = fStack_4c;
            if (param_3 == 0) {
              func_0x014388e4();
            }
            iVar9 = func_0x02ce844c(param_3,0);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&fStack_58,iVar9,0);
            fVar4 = fStack_54;
            fVar3 = fStack_58;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar12 = func_0x024eecb8(iVar6,0);
            uVar13 = func_0x014388d4(**(undefined4 **)(_UNK_0196241c + 0x19622a0));
            func_0x0152e3ec(uVar13,iVar8,**(undefined4 **)(_UNK_01962420 + 0x19622bc),0);
            if (*(int *)(**(int **)(_UNK_01962424 + 0x19622d0) + 0x74) == 0) {
              func_0x014387a4();
            }
            fVar17 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
            func_0x01962804(fVar7,fVar10 + fVar3,fVar11 + fVar4,uVar12,fVar2 + fVar17 * fVar1,1,
                            uVar13);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(iVar5 + 0x10));
      }
      if (*(int *)(**(int **)(_UNK_01962428 + 0x1962348) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x0202346c(0);
      uVar12 = func_0x01524ffc(&fStack_4c,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x020257a4(iVar5,0x336,uVar12,0,0,0,0);
    }
  }
  else {
    iVar5 = func_0x029540a4(0x3bcb,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x028691b4(iVar5,param_1,param_2,param_3,0);
  }
  return;
}

