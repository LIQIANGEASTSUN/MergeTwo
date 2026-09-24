
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03113cc0(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_0311447c + 0x3113cdc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03114480 + 0x3113cf0));
    func_0x01438628(*(undefined4 *)(_UNK_03114484 + 0x3113cfc));
    func_0x01438628(*(undefined4 *)(_UNK_03114488 + 0x3113d08));
    func_0x01438628(*(undefined4 *)(_UNK_0311448c + 0x3113d14));
    func_0x01438628(*(undefined4 *)(_UNK_03114490 + 0x3113d20));
    func_0x01438628(*(undefined4 *)(_UNK_03114494 + 0x3113d2c));
    func_0x01438628(*(undefined4 *)(_UNK_03114498 + 0x3113d38));
    func_0x01438628(*(undefined4 *)(_UNK_0311449c + 0x3113d44));
    func_0x01438628(*(undefined4 *)(_UNK_031144a0 + 0x3113d50));
    func_0x01438628(*(undefined4 *)(_UNK_031144a4 + 0x3113d5c));
    func_0x01438628(*(undefined4 *)(_UNK_031144a8 + 0x3113d68));
    func_0x01438628(*(undefined4 *)(_UNK_031144ac + 0x3113d74));
    func_0x01438628(*(undefined4 *)(_UNK_031144b0 + 0x3113d80));
    func_0x01438628(*(undefined4 *)(_UNK_031144b4 + 0x3113d8c));
    func_0x01438628(*(undefined4 *)(_UNK_031144b8 + 0x3113d98));
    func_0x01438628(*(undefined4 *)(_UNK_031144bc + 0x3113da4));
    func_0x01438628(*(undefined4 *)(_UNK_031144c0 + 0x3113db0));
    func_0x01438628(*(undefined4 *)(_UNK_031144c4 + 0x3113dbc));
    func_0x01438628(*(undefined4 *)(_UNK_031144c8 + 0x3113dc8));
    func_0x01438628(*(undefined4 *)(_UNK_031144cc + 0x3113dd4));
    func_0x01438628(*(undefined4 *)(_UNK_031144d0 + 0x3113de0));
    func_0x01438628(*(undefined4 *)(_UNK_031144d4 + 0x3113dec));
    func_0x01438628(*(undefined4 *)(_UNK_031144d8 + 0x3113df8));
    func_0x01438628(*(undefined4 *)(_UNK_031144dc + 0x3113e04));
    func_0x01438628(*(undefined4 *)(_UNK_031144e0 + 0x3113e10));
    func_0x01438628(*(undefined4 *)(_UNK_031144e4 + 0x3113e1c));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x785f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031144e8 + 0x3113e80));
    func_0x0311cc24(iVar1,0);
    iVar3 = FUN_0310c164(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_031144ec + 0x3113ed8));
    if (iVar3 == 0) {
      iVar3 = FUN_0310c164(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_031144f0 + 0x3113f28));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031144f4 + 0x3113f3c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_031144f8 + 0x3113f50));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_0310d2e8(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_031144fc + 0x3113fac));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_03114500 + 0x3113fe0);
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
          uVar2 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03114504 + 0x3114080));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_03114508 + 0x31140d0);
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
            func_0x04cfda38(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0311450c + 0x3114130));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_03114510 + 0x3114144));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03114514 + 0x3114188) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_0310ad6c();
        if (iVar3 != 0) {
          func_0x0311df8c(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_03114518 + 0x31141b8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0311451c + 0x31141d8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_03114520 + 0x3114210);
        piVar13 = *(int **)(_UNK_03114524 + 0x3114218);
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
          iVar9 = func_0x04cfd760(iVar9,iVar3,*puVar12);
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
          func_0x020257a4(iVar10,0x2dd,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03114528 + 0x3114374) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_0311452c + 0x3114390));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_03114530 + 0x31143a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_03114534 + 0x31143c4));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03114538 + 0x31143e4));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_0311453c + 0x3114404),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xdc,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_03114540 + 0x311430c);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03114544 + 0x3114328);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03114548 + 0x311433c));
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
    iVar1 = func_0x029540a4(0x785f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

