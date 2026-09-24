
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016eb268(int *param_1)

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
  
  pcVar9 = (char *)(_UNK_016eb880 + 0x16eb288);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016eb884 + 0x16eb29c));
    func_0x01438628(*(undefined4 *)(_UNK_016eb888 + 0x16eb2a8));
    func_0x01438628(*(undefined4 *)(_UNK_016eb88c + 0x16eb2b4));
    func_0x01438628(*(undefined4 *)(_UNK_016eb890 + 0x16eb2c0));
    func_0x01438628(*(undefined4 *)(_UNK_016eb894 + 0x16eb2cc));
    func_0x01438628(*(undefined4 *)(_UNK_016eb898 + 0x16eb2d8));
    func_0x01438628(*(undefined4 *)(_UNK_016eb89c + 0x16eb2e4));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1874,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1874,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028aa8cc + 0x28aa7ec);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028aa8d0 + 0x28aa800),param_1,0);
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
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028aa8d4 + 0x28aa8bc));
    return iVar2;
  }
  iVar2 = FUN_016ea4e8(param_1);
  fVar1 = _UNK_016eb340;
  if (iVar2 != 0) {
    iVar11 = 0;
    iVar2 = 0;
    puVar10 = *(undefined4 **)(_UNK_016eb8a0 + 0x16eb36c);
    while( true ) {
      iVar3 = func_0x016eedc8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar11) break;
      iVar3 = func_0x016efcac(param_1);
      if (iVar3 != 0) {
        iVar2 = 1;
      }
      iVar3 = func_0x016eedc8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0152983c(iVar3,iVar11,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x24) == iVar2) {
        iVar4 = func_0x016ef2ac(param_1);
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
        iVar4 = func_0x016ef2ac(param_1);
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
        iVar2 = func_0x016ef2ac(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar12 = *(undefined4 *)(iVar2 + 0x50);
        uVar8 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_016eb8a4 + 0x16eb4c8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_016eb8a8 + 0x16eb4e8));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_016eb8ac + 0x16eb51c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x02aedf90(uVar12,uVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0);
        iVar6 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar11 = iStack_3c;
        iVar2 = iStack_40;
        puVar10 = *(undefined4 **)(_UNK_016eb8b0 + 0x16eb570);
        if (iVar6 == 0) {
          if (*(int *)(**(int **)(_UNK_016eb8b4 + 0x16eb584) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016eb8b8 + 0x16eb5a0));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar16 = func_0x026ffbe0(iVar6,0);
          uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
          if (uStack_48 < uVar7 || uVar7 - uStack_48 < (uint)(uStack_44 <= (uint)uVar16)) {
            if (*(int *)(**(int **)(_UNK_016eb8bc + 0x16eb5e0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_016eb8c0 + 0x16eb5fc));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar6,0);
            uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
            if (uVar7 <= uVar5 && (uint)((uint)lVar15 <= (uint)uVar16) <= uVar7 - uVar5)
            goto LAB_016eb62c;
          }
        }
        else {
LAB_016eb62c:
          iVar6 = func_0x016efcac(param_1);
          if (iVar6 == 0) {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x016ef2ac(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0540(iVar6,uVar12,**(undefined4 **)(_UNK_016eb8cc + 0x16eb7b4));
              if (iVar6 != 0) {
                iVar6 = func_0x016ef2ac(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f05d4(iVar6,uVar12,**(undefined4 **)(_UNK_016eb8d0 + 0x16eb804));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) goto LAB_016eb860;
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x016ef2ac(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) goto LAB_016eb860;
            }
          }
          else {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x016ef2ac(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0540(iVar6,uVar12,**(undefined4 **)(_UNK_016eb8c4 + 0x16eb688));
              if (iVar6 != 0) {
                iVar6 = func_0x016ef2ac(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f05d4(iVar6,uVar12,**(undefined4 **)(_UNK_016eb8c8 + 0x16eb6d8));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) {
                  iVar6 = func_0x016ef2ac(param_1);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x5c) != 1) goto LAB_016eb860;
                }
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x016ef2ac(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) {
                iVar4 = func_0x016ef2ac(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_016eb860;
              }
            }
          }
          iVar4 = func_0x016f7ed4(param_1,iVar3);
          if (iVar4 != 0) {
            return iVar3;
          }
        }
      }
LAB_016eb860:
      iVar11 = iVar11 + 1;
    }
  }
  return 0;
}

