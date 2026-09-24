
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032e1694(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  
  pcVar7 = (char *)(_UNK_032e1c78 + 0x32e16b4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032e1c7c + 0x32e16c8));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c80 + 0x32e16d4));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c84 + 0x32e16e0));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c88 + 0x32e16ec));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c8c + 0x32e16f8));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c90 + 0x32e1704));
    func_0x01438628(*(undefined4 *)(_UNK_032e1c94 + 0x32e1710));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1818,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1818,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_028a9ea4 + 0x28a9dc4);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a9ea8 + 0x28a9dd8),param_1,0);
      *pcVar7 = '\x01';
    }
    func_0x024f56c0(&uStack_48,0);
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
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar6,0,0);
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a9eac + 0x28a9e94));
    return iVar2;
  }
  iVar2 = FUN_032d6320(param_1);
  fVar1 = _UNK_032e1b6c;
  if (iVar2 != 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_032e1c98 + 0x32e1790);
    while( true ) {
      iVar9 = FUN_032d41a8(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar2) break;
      iVar9 = FUN_032d41a8(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      iVar9 = func_0x04cfd760(iVar9,iVar2,*puVar8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x24) == 1) {
        iVar3 = FUN_032d4694(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0xc) * fVar1;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_40 = (uint)lVar13;
        uStack_44 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar3 = FUN_032d4694(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        fVar11 = *(float *)(iVar9 + 0x10) * fVar1;
        iStack_3c = iVar2;
        lVar12 = func_0x014e61a4(fVar11);
        lVar13 = func_0x014e6220(fVar11);
        if (fVar11 < 0.0) {
          lVar13 = lVar12;
        }
        lVar13 = lVar13 + *(longlong *)(iVar3 + 0x20);
        uStack_48 = (uint)((ulonglong)lVar13 >> 0x20);
        iVar2 = FUN_032d4694(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar10 = *(undefined4 *)(iVar2 + 0x50);
        uVar6 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_032e1c9c + 0x32e18d8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032e1ca0 + 0x32e18f8));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar14 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_032e1ca4 + 0x32e192c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02aedf90(uVar10,uVar6,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
        iVar4 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar2 = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_032e1ca8 + 0x32e1980);
        if (iVar4 == 0) {
          if (*(int *)(**(int **)(_UNK_032e1cac + 0x32e1990) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032e1cb0 + 0x32e19ac));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar14 = func_0x026ffbe0(iVar4,0);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if (uStack_44 < uVar5 || uVar5 - uStack_44 < (uint)(uStack_40 <= (uint)uVar14)) {
            if (*(int *)(**(int **)(_UNK_032e1cb4 + 0x32e19ec) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_032e1cb8 + 0x32e1a08));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar14 = func_0x026ffbe0(iVar4,0);
            uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
            if (uVar5 <= uStack_48 && (uint)((uint)lVar13 <= (uint)uVar14) <= uVar5 - uStack_48)
            goto LAB_032e1a38;
          }
        }
        else {
LAB_032e1a38:
          iVar4 = FUN_032d54b4(param_1);
          if (iVar4 == 0) {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = FUN_032d4694(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x046c26fc(iVar4,uVar10,**(undefined4 **)(_UNK_032e1cc4 + 0x32e1bb4));
              if (iVar4 != 0) {
                iVar4 = FUN_032d4694(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b70fac(iVar4,uVar10,**(undefined4 **)(_UNK_032e1cc8 + 0x32e1c00));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) goto LAB_032e1c58;
              }
            }
            if (iVar3 != 0) {
              iVar3 = FUN_032d4694(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) goto LAB_032e1c58;
            }
          }
          else {
            if (0 < *(int *)(iVar9 + 0x1c)) {
              iVar4 = FUN_032d4694(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar4 + 0x30);
              uVar10 = *(undefined4 *)(iVar9 + 8);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              iVar4 = func_0x046c26fc(iVar4,uVar10,**(undefined4 **)(_UNK_032e1cbc + 0x32e1a90));
              if (iVar4 != 0) {
                iVar4 = FUN_032d4694(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = *(int *)(iVar4 + 0x30);
                uVar10 = *(undefined4 *)(iVar9 + 8);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                iVar4 = func_0x03b70fac(iVar4,uVar10,**(undefined4 **)(_UNK_032e1cc0 + 0x32e1adc));
                if (*(int *)(iVar9 + 0x1c) <= iVar4) {
                  iVar4 = FUN_032d4694(param_1);
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_032e1c58;
                }
              }
            }
            if (iVar3 != 0) {
              iVar3 = FUN_032d4694(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar9 + 0x28) <= *(int *)(iVar3 + 0x58)) {
                iVar3 = FUN_032d4694(param_1);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar3 + 0x5c) != 1) goto LAB_032e1c58;
              }
            }
          }
          iVar3 = func_0x032e1ccc(param_1,iVar9);
          if (iVar3 != 0) {
            return iVar9;
          }
        }
      }
LAB_032e1c58:
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}

