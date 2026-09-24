
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03179ea8(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  
  pcVar9 = (char *)(_UNK_0317a4c0 + 0x3179ec8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0317a4c4 + 0x3179edc));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4c8 + 0x3179ee8));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4cc + 0x3179ef4));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4d0 + 0x3179f00));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4d4 + 0x3179f0c));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4d8 + 0x3179f18));
    func_0x01438628(*(undefined4 *)(_UNK_0317a4dc + 0x3179f24));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1360,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1360,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028a15b4 + 0x28a14d4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a15b8 + 0x28a14e8),param_1,0);
      *pcVar9 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar11,uVar12,&stack0xffffffd0,uVar8,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a15bc + 0x28a15a4));
    return iVar2;
  }
  iVar2 = FUN_03178744(param_1);
  fVar1 = _UNK_03179f80;
  if (iVar2 != 0) {
    iVar11 = 0;
    iVar2 = 0;
    puVar10 = *(undefined4 **)(_UNK_0317a4e0 + 0x3179fac);
    while( true ) {
      iVar3 = func_0x0317e308(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar11) break;
      iVar3 = func_0x0317f614(param_1);
      if (iVar3 != 0) {
        iVar2 = 1;
      }
      iVar3 = func_0x0317e308(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x04cfd760(iVar3,iVar11,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x24) == iVar2) {
        iVar4 = func_0x0317e7f4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        fVar13 = *(float *)(iVar3 + 0xc) * fVar1;
        lVar14 = func_0x014e61a4(fVar13);
        lVar15 = func_0x014e6220(fVar13);
        if (fVar13 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar4 + 0x20);
        uStack_44 = (uint)lVar15;
        uStack_48 = (uint)((ulonglong)lVar15 >> 0x20);
        iVar4 = func_0x0317e7f4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        fVar13 = *(float *)(iVar3 + 0x10) * fVar1;
        iStack_40 = iVar2;
        iStack_3c = iVar11;
        lVar14 = func_0x014e61a4(fVar13);
        lVar15 = func_0x014e6220(fVar13);
        if (fVar13 < 0.0) {
          lVar15 = lVar14;
        }
        lVar15 = lVar15 + *(longlong *)(iVar4 + 0x20);
        uVar5 = (uint)((ulonglong)lVar15 >> 0x20);
        iVar2 = func_0x0317e7f4(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar12 = *(undefined4 *)(iVar2 + 0x50);
        uVar8 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_0317a4e4 + 0x317a108) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_0317a4e8 + 0x317a128));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_0317a4ec + 0x317a15c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x02aedf90(uVar12,uVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0);
        iVar6 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar11 = iStack_3c;
        iVar2 = iStack_40;
        puVar10 = *(undefined4 **)(_UNK_0317a4f0 + 0x317a1b0);
        if (iVar6 == 0) {
          if (*(int *)(**(int **)(_UNK_0317a4f4 + 0x317a1c4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0317a4f8 + 0x317a1e0));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar16 = func_0x026ffbe0(iVar6,0);
          uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
          if (uStack_48 < uVar7 || uVar7 - uStack_48 < (uint)(uStack_44 <= (uint)uVar16)) {
            if (*(int *)(**(int **)(_UNK_0317a4fc + 0x317a220) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_0317a500 + 0x317a23c));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar6,0);
            uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
            if (uVar7 <= uVar5 && (uint)((uint)lVar15 <= (uint)uVar16) <= uVar7 - uVar5)
            goto LAB_0317a26c;
          }
        }
        else {
LAB_0317a26c:
          iVar6 = func_0x0317f614(param_1);
          if (iVar6 == 0) {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x0317e7f4(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x046c26fc(iVar6,uVar12,**(undefined4 **)(_UNK_0317a50c + 0x317a3f4));
              if (iVar6 != 0) {
                iVar6 = func_0x0317e7f4(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b70fac(iVar6,uVar12,**(undefined4 **)(_UNK_0317a510 + 0x317a444));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) goto LAB_0317a4a0;
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x0317e7f4(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) goto LAB_0317a4a0;
            }
          }
          else {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x0317e7f4(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x046c26fc(iVar6,uVar12,**(undefined4 **)(_UNK_0317a504 + 0x317a2c8));
              if (iVar6 != 0) {
                iVar6 = func_0x0317e7f4(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b70fac(iVar6,uVar12,**(undefined4 **)(_UNK_0317a508 + 0x317a318));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) {
                  iVar6 = func_0x0317e7f4(param_1);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x5c) != 1) goto LAB_0317a4a0;
                }
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x0317e7f4(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) {
                iVar4 = func_0x0317e7f4(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_0317a4a0;
              }
            }
          }
          iVar4 = func_0x0318a8f8(param_1,iVar3);
          if (iVar4 != 0) {
            return iVar3;
          }
        }
      }
LAB_0317a4a0:
      iVar11 = iVar11 + 1;
    }
  }
  return 0;
}

