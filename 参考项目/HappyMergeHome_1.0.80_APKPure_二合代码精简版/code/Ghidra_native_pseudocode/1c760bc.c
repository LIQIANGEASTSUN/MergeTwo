
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c860bc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint in_fpscr;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  pcVar12 = (char *)(_UNK_01c86770 + 0x1c860e8);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c86774 + 0x1c860fc));
    func_0x01438628(*(undefined4 *)(_UNK_01c86778 + 0x1c86108));
    func_0x01438628(*(undefined4 *)(_UNK_01c8677c + 0x1c86114));
    func_0x01438628(*(undefined4 *)(_UNK_01c86780 + 0x1c86120));
    func_0x01438628(*(undefined4 *)(_UNK_01c86784 + 0x1c8612c));
    func_0x01438628(*(undefined4 *)(_UNK_01c86788 + 0x1c86138));
    func_0x01438628(*(undefined4 *)(_UNK_01c8678c + 0x1c86144));
    func_0x01438628(*(undefined4 *)(_UNK_01c86790 + 0x1c86150));
    func_0x01438628(*(undefined4 *)(_UNK_01c86794 + 0x1c8615c));
    func_0x01438628(*(undefined4 *)(_UNK_01c86798 + 0x1c86168));
    func_0x01438628(*(undefined4 *)(_UNK_01c8679c + 0x1c86174));
    func_0x01438628(*(undefined4 *)(_UNK_01c867a0 + 0x1c86180));
    func_0x01438628(*(undefined4 *)(_UNK_01c867a4 + 0x1c8618c));
    func_0x01438628(*(undefined4 *)(_UNK_01c867a8 + 0x1c86198));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5f2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5f2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0287e67c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c867ac + 0x1c86210));
  func_0x01c884c8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  piVar14 = (int *)(iVar2 + 0x14);
  *piVar14 = param_6;
  func_0x014385cc(piVar14,param_6);
  *(int *)(iVar2 + 0x18) = param_1;
  func_0x014385cc((int *)(iVar2 + 0x18),param_1);
  iVar7 = *(int *)(**(int **)(_UNK_01c867b0 + 0x1c86260) + 0x74);
  *(undefined1 *)(param_1 + 0x51) = 1;
  if (iVar7 == 0) {
    func_0x014387a4();
  }
  puVar16 = *(undefined4 **)(_UNK_01c867b4 + 0x1c86280);
  iVar7 = func_0x014e9518(*puVar16);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  iVar7 = func_0x03579aec(iVar7,**(undefined4 **)(_UNK_01c867bc + 0x1c862ac),
                          **(undefined4 **)(_UNK_01c867b8 + 0x1c862a0));
  pcVar12 = (char *)(_UNK_01c867c0 + 0x1c862c4);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c867c4 + 0x1c862d8));
    *pcVar12 = '\x01';
  }
  puVar8 = *(undefined8 **)(**(int **)(_UNK_01c867c8 + 0x1c862ec) + 0x5c);
  uVar22 = *puVar8;
  piVar3 = *(int **)(_UNK_01c867cc + 0x1c86300);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(puVar8 + 1);
  iVar4 = *piVar3;
  *(undefined8 *)(iVar2 + 8) = uVar22;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x024ef144(iVar7,0,0);
  if (iVar4 == 0) {
LAB_01c86398:
    if (*(int *)(**(int **)(_UNK_01c867d0 + 0x1c863a4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(*puVar16);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x03579aec(iVar4,**(undefined4 **)(_UNK_01c867d8 + 0x1c863e4),
                            **(undefined4 **)(_UNK_01c867d4 + 0x1c863d8));
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar17 = func_0x024ef144(iVar4,0,0);
    if (iVar17 == 0) goto LAB_01c8646c;
    if (iVar4 == 0) {
      func_0x014388e4();
    }
  }
  else {
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x014e94d8(iVar7,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x024efc2c(iVar4,0);
    if (iVar4 == 0) goto LAB_01c86398;
    iVar4 = iVar7;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
  }
  iVar4 = func_0x024eecb8(iVar4,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  func_0x024ef228(&uStack_58,iVar4,0);
  uStack_40 = uStack_50;
  *(undefined4 *)(iVar2 + 0x10) = uStack_50;
  uStack_48 = uStack_58;
  *(undefined8 *)(iVar2 + 8) = uStack_58;
LAB_01c8646c:
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x024eec50(iVar7,0,0);
  if (iVar4 == 0) {
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar10 = *(undefined4 *)(iVar7 + 0x10);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x024eec50(uVar10,0,0);
    if (iVar4 == 0) {
      piVar14 = *(int **)(_UNK_01c867dc + 0x1c86528);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar10 = func_0x0152adfc(param_2,8,0);
      fVar20 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
      pcVar12 = (char *)(_UNK_01c867e0 + 0x1c8655c);
      fVar21 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x16) & 3);
      if (*pcVar12 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01c867e4 + 0x1c86578));
        *pcVar12 = '\x01';
      }
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x014387a4();
      }
      fVar21 = (float)func_0x024f04b4(fVar20 / fVar21);
      fVar20 = _UNK_01c8676c;
      uVar19 = in_fpscr & 0xfffffff | (uint)(fVar21 == _UNK_01c86768) << 0x1e;
      iVar4 = (int)fVar21;
      if (SUB41(uVar19 >> 0x1e,0)) {
        iVar4 = -0x80000000;
      }
      if (param_2 < 1) {
        return;
      }
      iVar17 = 0;
      do {
        iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01c867e8 + 0x1c865dc));
        func_0x01c884d0(iVar5,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        piVar14 = (int *)(iVar5 + 0xc);
        *piVar14 = iVar2;
        func_0x014385cc(piVar14,iVar2);
        bVar1 = param_2 < iVar4;
        param_2 = param_2 - iVar4;
        if (bVar1) {
          param_2 = 0;
        }
        iVar9 = *(int *)(**(int **)(_UNK_01c867ec + 0x1c86618) + 0x74);
        *(int *)(iVar5 + 8) = param_2;
        if (iVar9 == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01c867f0 + 0x1c86648));
        iVar13 = *piVar14;
        uVar10 = *(undefined4 *)(iVar7 + 0x10);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        uVar15 = *(undefined4 *)(iVar13 + 8);
        uVar11 = *(undefined4 *)(iVar13 + 0xc);
        uVar18 = *(undefined4 *)(iVar13 + 0x10);
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01c867f4 + 0x1c86678));
        func_0x0152e3ec(uVar6,iVar5,**(undefined4 **)(_UNK_01c867f8 + 0x1c866a0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        fVar21 = (float)VectorSignedToFloat(iVar17,(byte)(uVar19 >> 0x16) & 3);
        func_0x02b777e0(iVar9,uVar10,param_3,param_4,param_5,uVar15,uVar11,uVar18,1,0x3f333333,
                        fVar21 * fVar20,uVar6,0x3f666666,0x3e99999a,0xbe99999a,1,1,0xb,1,0,
                        0x3e99999a,1,1,0);
        iVar17 = iVar17 + 1;
      } while (0 < param_2);
      return;
    }
  }
  FUN_01c84820(param_1);
  FUN_01c84c48(param_1);
  iVar2 = *piVar14;
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}

