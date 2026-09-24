
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0323716c(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 auStack_48 [8];
  uint uStack_40;
  uint uStack_3c;
  
  pcVar6 = (char *)(_UNK_032375b0 + 0x323718c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032375b4 + 0x32371a0));
    func_0x01438628(*(undefined4 *)(_UNK_032375b8 + 0x32371ac));
    func_0x01438628(*(undefined4 *)(_UNK_032375bc + 0x32371b8));
    func_0x01438628(*(undefined4 *)(_UNK_032375c0 + 0x32371c4));
    func_0x01438628(*(undefined4 *)(_UNK_032375c4 + 0x32371d0));
    func_0x01438628(*(undefined4 *)(_UNK_032375c8 + 0x32371dc));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x16e6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x16e6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_028a7e1c + 0x28a7d3c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a7e20 + 0x28a7d50),param_1,0);
      *pcVar6 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&stack0xffffffd0,uVar5,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a7e24 + 0x28a7e0c));
    return iVar2;
  }
  iVar2 = FUN_03235a08(param_1);
  fVar1 = _UNK_032375ac;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar9 = *(undefined4 **)(_UNK_032375cc + 0x323725c);
    while( true ) {
      iVar8 = func_0x0323c0e4(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar2) break;
      iVar8 = func_0x0323c0e4(param_1);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x04cfd760(iVar8,iVar2,*puVar9);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar8 + 0x24) == 1) {
        iVar3 = func_0x0323c5d0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0xc) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar14 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uStack_3c = (uint)lVar14;
        uStack_40 = (uint)((ulonglong)lVar14 >> 0x20);
        iVar3 = func_0x0323c5d0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar12 = *(float *)(iVar8 + 0x10) * fVar1;
        lVar13 = func_0x014e61a4(fVar12);
        lVar14 = func_0x014e6220(fVar12);
        if (fVar12 < 0.0) {
          lVar14 = lVar13;
        }
        lVar13 = lVar14 + *(longlong *)(iVar3 + 0x20);
        uVar11 = (uint)lVar13;
        uVar7 = (uint)((ulonglong)lVar13 >> 0x20);
        func_0x03248f88(param_1,(int)((ulonglong)lVar14 >> 0x20),uVar11,uVar7);
        iVar3 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        puVar9 = *(undefined4 **)(_UNK_032375d0 + 0x32373ac);
        if (iVar3 == 0) {
          if (*(int *)(**(int **)(_UNK_032375d4 + 0x32373b8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032375d8 + 0x32373d4));
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar15 = func_0x026ffbe0(iVar3,0);
          uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
          if (uStack_40 < uVar4 || uVar4 - uStack_40 < (uint)(uStack_3c <= (uint)uVar15)) {
            if (*(int *)(**(int **)(_UNK_032375dc + 0x3237414) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032375e0 + 0x3237430));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar15 = func_0x026ffbe0(iVar3,0);
            uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
            if (uVar4 <= uVar7 && (uint)(uVar11 <= (uint)uVar15) <= uVar4 - uVar7)
            goto LAB_0323745c;
          }
        }
        else {
LAB_0323745c:
          uVar10 = func_0x03249218(param_1);
          if (0 < *(int *)(iVar8 + 0x1c)) {
            iVar3 = func_0x0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c26fc(iVar3,uVar10,**(undefined4 **)(_UNK_032375e4 + 0x32374ac));
            if (iVar3 != 0) {
              iVar3 = func_0x0323c5d0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x30);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b70fac(iVar3,uVar10,**(undefined4 **)(_UNK_032375e8 + 0x32374f4));
              if (*(int *)(iVar8 + 0x1c) <= iVar3) {
                iVar3 = func_0x0323c5d0(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0323758c;
              }
            }
          }
          iVar3 = func_0x0323c5d0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar8 + 0x28) <= *(int *)(iVar3 + 0x58)) {
            iVar3 = func_0x0323c5d0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_0323758c;
          }
          iVar3 = func_0x03249398(param_1,iVar8);
          if (iVar3 != 0) {
            return iVar8;
          }
        }
      }
LAB_0323758c:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

