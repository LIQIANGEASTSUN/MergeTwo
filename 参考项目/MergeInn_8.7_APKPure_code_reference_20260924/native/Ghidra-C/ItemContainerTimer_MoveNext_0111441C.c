// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: ItemContainerTimer.MoveNext 0x111441C; ItemContainer.<StartCapacityTimer>d__94::MoveNext()
// Image base: 0x10000; Ghidra address: 0112441c; native size hint: 0x504


undefined4 ItemContainerTimer_MoveNext_0111441C(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  
  pcVar5 = (char *)(iRam011248e4 + 0x1124438);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam011248e8 + 0x112444c));
    func_0x00f6b160(*(undefined4 *)(iRam011248ec + 0x1124458));
    func_0x00f6b160(*(undefined4 *)(iRam011248f0 + 0x1124464));
    func_0x00f6b160(*(undefined4 *)(iRam011248f4 + 0x1124470));
    func_0x00f6b160(*(undefined4 *)(iRam011248f8 + 0x112447c));
    func_0x00f6b160(*(undefined4 *)(iRam011248fc + 0x1124488));
    func_0x00f6b160(*(undefined4 *)(iRam01124900 + 0x1124494));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    return 0;
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 != (int *)0x0) goto LAB_011245dc;
    func_0x00f6b3d0();
    fVar9 = fRam000000f0;
    if (0.0 < fRam000000f0) goto LAB_01124630;
    func_0x00f6b3d0();
    func_0x011081c0(uRam00000034,0);
    func_0x00f6b3d0();
    if (cRam00000038 == '\0') {
      func_0x00f6b3d0();
      bVar1 = true;
      goto LAB_01124744;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    fVar9 = fRam011248e0;
    if (piVar6[0x21] == 0) {
      uVar4 = func_0x00f6b3c4(**(undefined4 **)(iRam01124904 + 0x11246c8));
      func_0x0152e284(uVar4,**(undefined4 **)(iRam01124908 + 0x11246e4),0);
      if (*(int *)(**(int **)(iRam0112490c + 0x11246f8) + 0x74) == 0) {
        func_0x00f6b294();
      }
      func_0x0200818c(uVar4,0);
      return 0;
    }
    fVar8 = (float)piVar6[0x2a] - *(float *)(param_1 + 0x14);
    piVar6[0x3c] = (int)*(float *)(param_1 + 0x14);
    iVar3 = (int)fVar8;
    if (fVar8 == fVar9) {
      iVar3 = -0x80000000;
    }
    func_0x01108008(piVar6[0xd],iVar3,0);
    iVar3 = *(int *)(**(int **)(iRam01124910 + 0x1124524) + 0x74);
    if (iVar3 == 0) {
      func_0x00f6b294();
      iVar3 = extraout_r1;
    }
    dVar10 = (double)func_0x010afca8(**(undefined4 **)(iRam01124914 + 0x1124548),iVar3,0,0,0,0,0,0);
    uVar4 = **(undefined4 **)(iRam01124918 + 0x1124578);
    piVar6[0x34] = (int)(float)dVar10;
    dVar10 = (double)func_0x010afca8(uVar4,(int)((ulonglong)dVar10 >> 0x20),0,0,0,0,0,0);
    uVar4 = **(undefined4 **)(iRam0112491c + 0x11245ac);
    piVar6[0x35] = (int)(float)dVar10;
    uVar11 = func_0x010af704(uVar4,(int)((ulonglong)dVar10 >> 0x20),0,0,0,0,0,0);
    *(undefined8 *)(piVar6 + 0x36) = uVar11;
LAB_011245dc:
    fVar9 = (float)piVar6[0x3c];
    if (0.0 < (float)piVar6[0x3c]) {
LAB_01124630:
      fVar8 = (float)func_0x020082b0(0);
      func_0x01123eac(piVar6,fVar9 - fVar8);
      iVar3 = piVar6[0x3b];
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar3 + 8) == 0) {
        iVar3 = piVar6[0x24];
        fVar9 = (float)piVar6[0x2a];
        fVar8 = (float)piVar6[0x3c];
        if (iVar3 == 0) {
          func_0x00f6b3d0();
        }
        func_0x0110d218(iVar3,fVar8 / fVar9,0);
      }
      fVar8 = (float)piVar6[0x3c];
      fVar9 = (float)func_0x020082b0(0);
      iVar3 = piVar6[0x2f];
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0xc) = iVar3;
      piVar6[0x3c] = (int)(fVar8 - fVar9);
      return 1;
    }
    bVar1 = false;
    func_0x011081c0(piVar6[0xd],0);
    if ((char)piVar6[0xe] != '\0') goto LAB_01124770;
LAB_01124744:
    iVar3 = piVar6[0x21];
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    if (*(char *)(iVar3 + 0x74) == '\0') {
      if (bVar1) {
        func_0x00f6b3d0();
        func_0x01123aa4(piVar6,1);
        func_0x00f6b3d0();
      }
      else {
        func_0x01123aa4(piVar6,1);
      }
      iVar3 = piVar6[0x23];
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      iVar3 = func_0x0152fbec(iVar3,0);
      if (iVar3 == 0) {
        if (bVar1) {
          func_0x00f6b3d0();
          if ((char)piVar6[0xe] == '\0') {
            func_0x00f6b3d0();
            goto LAB_01124804;
          }
          goto LAB_01124824;
        }
        bVar2 = false;
        if ((char)piVar6[0xe] == '\0') {
LAB_01124804:
          (**(code **)(*piVar6 + 0x260))(piVar6,*(undefined4 *)(*piVar6 + 0x264));
          goto LAB_01124818;
        }
      }
      else {
LAB_01124818:
        bVar2 = false;
        if (bVar1) {
LAB_01124824:
          func_0x00f6b3d0();
          bVar2 = true;
        }
      }
      iVar3 = piVar6[0x3b];
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (bVar2) {
        func_0x00f6b3d0();
      }
      iVar7 = piVar6[0x3a];
      if (iVar7 == 0) {
        func_0x00f6b3d0();
      }
      if (iVar3 < *(int *)(iVar7 + 8)) {
        if (bVar2) {
          func_0x00f6b3d0();
          iVar3 = piVar6[0x2a];
          func_0x00f6b3d0();
        }
        else {
          iVar3 = piVar6[0x2a];
        }
        uVar4 = func_0x01123e14(piVar6,iVar3);
        *(undefined4 *)(param_1 + 8) = 2;
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        return 1;
      }
      if (bVar2) {
        func_0x00f6b3d0();
      }
      iVar3 = piVar6[0x24];
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      func_0x0110cf98(iVar3,0);
      if (bVar2) {
        func_0x00f6b3d0();
      }
      goto LAB_01124770;
    }
    if (!bVar1) goto LAB_01124770;
  }
  func_0x00f6b3d0();
LAB_01124770:
  piVar6[0x30] = 0;
  return 0;
}

