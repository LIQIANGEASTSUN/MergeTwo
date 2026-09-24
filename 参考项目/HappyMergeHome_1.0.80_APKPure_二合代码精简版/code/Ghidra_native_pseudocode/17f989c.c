
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0180989c(undefined4 param_1,int param_2)

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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_0180a058 + 0x18098b8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0180a05c + 0x18098cc));
    func_0x01438628(*(undefined4 *)(_UNK_0180a060 + 0x18098d8));
    func_0x01438628(*(undefined4 *)(_UNK_0180a064 + 0x18098e4));
    func_0x01438628(*(undefined4 *)(_UNK_0180a068 + 0x18098f0));
    func_0x01438628(*(undefined4 *)(_UNK_0180a06c + 0x18098fc));
    func_0x01438628(*(undefined4 *)(_UNK_0180a070 + 0x1809908));
    func_0x01438628(*(undefined4 *)(_UNK_0180a074 + 0x1809914));
    func_0x01438628(*(undefined4 *)(_UNK_0180a078 + 0x1809920));
    func_0x01438628(*(undefined4 *)(_UNK_0180a07c + 0x180992c));
    func_0x01438628(*(undefined4 *)(_UNK_0180a080 + 0x1809938));
    func_0x01438628(*(undefined4 *)(_UNK_0180a084 + 0x1809944));
    func_0x01438628(*(undefined4 *)(_UNK_0180a088 + 0x1809950));
    func_0x01438628(*(undefined4 *)(_UNK_0180a08c + 0x180995c));
    func_0x01438628(*(undefined4 *)(_UNK_0180a090 + 0x1809968));
    func_0x01438628(*(undefined4 *)(_UNK_0180a094 + 0x1809974));
    func_0x01438628(*(undefined4 *)(_UNK_0180a098 + 0x1809980));
    func_0x01438628(*(undefined4 *)(_UNK_0180a09c + 0x180998c));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0a0 + 0x1809998));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0a4 + 0x18099a4));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0a8 + 0x18099b0));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0ac + 0x18099bc));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0b0 + 0x18099c8));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0b4 + 0x18099d4));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0b8 + 0x18099e0));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0bc + 0x18099ec));
    func_0x01438628(*(undefined4 *)(_UNK_0180a0c0 + 0x18099f8));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x908b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0180a0c4 + 0x1809a5c));
    func_0x01811bc0(iVar1,0);
    iVar3 = FUN_018013d8(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_0180a0c8 + 0x1809ab4));
    if (iVar3 == 0) {
      iVar3 = FUN_018013d8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_0180a0cc + 0x1809b04));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0180a0d0 + 0x1809b18));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_0180a0d4 + 0x1809b2c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_0180255c(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_0180a0d8 + 0x1809b88));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0180a0dc + 0x1809bbc);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x024f0530(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0180a0e0 + 0x1809c5c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_0180a0e4 + 0x1809cac);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0180a0e8 + 0x1809d0c));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_0180a0ec + 0x1809d20));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0180a0f0 + 0x1809d64) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_01800148();
        if (iVar3 != 0) {
          func_0x01812f44(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_0180a0f4 + 0x1809d94) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_0180a0f8 + 0x1809db4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0180a0fc + 0x1809dec);
        piVar13 = *(int **)(_UNK_0180a100 + 0x1809df4);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0180a104 + 0x1809f50) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_0180a108 + 0x1809f6c));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0180a10c + 0x1809f80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_0180a110 + 0x1809fa0));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0180a114 + 0x1809fc0));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0180a118 + 0x1809fe0),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0180a11c + 0x1809ee8);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0180a120 + 0x1809f04);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0180a124 + 0x1809f18));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x908b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

