
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01710264(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_017106b0 + 0x1710284);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017106b4 + 0x1710298));
    func_0x01438628(*(undefined4 *)(_UNK_017106b8 + 0x17102a4));
    func_0x01438628(*(undefined4 *)(_UNK_017106bc + 0x17102b0));
    func_0x01438628(*(undefined4 *)(_UNK_017106c0 + 0x17102bc));
    func_0x01438628(*(undefined4 *)(_UNK_017106c4 + 0x17102c8));
    func_0x01438628(*(undefined4 *)(_UNK_017106c8 + 0x17102d4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1653,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1653,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a6ecc + 0x28a6dec);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a6ed0 + 0x28a6e00),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a6ed4 + 0x28a6ebc));
    return iVar2;
  }
  iVar2 = FUN_0170e9c4(param_1);
  fVar1 = _UNK_017106ac;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_017106cc + 0x1710354);
    while( true ) {
      iVar9 = func_0x01714268(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      func_0x01715574(param_1);
      iVar9 = func_0x01714268(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x0152983c(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 0) {
        iVar3 = func_0x01714754(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = func_0x01714754(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar9 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uVar11 = (uint)lVar13;
        uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
        func_0x01720e84(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar8 = *(undefined4 **)(_UNK_017106d0 + 0x17104ac);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_017106d4 + 0x17104b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017106d8 + 0x17104d4));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_017106dc + 0x1710514) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_017106e0 + 0x1710530));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_0171055c;
          }
        }
        else {
LAB_0171055c:
          uVar10 = func_0x01721114(param_1);
          if (0 < *(int *)(iVar9 + 0x1c)) {
            iVar3 = func_0x01714754(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0540(iVar3,uVar10,**(undefined4 **)(_UNK_017106e4 + 0x17105ac));
            if (iVar3 != 0) {
              iVar3 = func_0x01714754(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x024f05d4(iVar3,uVar10,**(undefined4 **)(_UNK_017106e8 + 0x17105f4));
              if (*(int *)(iVar9 + 0x1c) <= iVar3) {
                iVar3 = func_0x01714754(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0171068c;
              }
            }
          }
          iVar3 = func_0x01714754(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x01714754(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0171068c;
          }
          iVar3 = func_0x01721294(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_0171068c:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

