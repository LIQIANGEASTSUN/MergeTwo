
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017d1cb4(int *param_1)

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
  
  pcVar9 = (char *)(_UNK_017d22f4 + 0x17d1cd4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d22f8 + 0x17d1ce8));
    func_0x01438628(*(undefined4 *)(_UNK_017d22fc + 0x17d1cf4));
    func_0x01438628(*(undefined4 *)(_UNK_017d2300 + 0x17d1d00));
    func_0x01438628(*(undefined4 *)(_UNK_017d2304 + 0x17d1d0c));
    func_0x01438628(*(undefined4 *)(_UNK_017d2308 + 0x17d1d18));
    func_0x01438628(*(undefined4 *)(_UNK_017d230c + 0x17d1d24));
    func_0x01438628(*(undefined4 *)(_UNK_017d2310 + 0x17d1d30));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x137c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x137c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028a19d4 + 0x28a18f4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a19d8 + 0x28a1908),param_1,0);
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
    iVar2 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_028a19dc + 0x28a19c4));
    return iVar2;
  }
  iVar2 = FUN_017d0ea0(param_1);
  fVar1 = _UNK_017d1d8c;
  if (iVar2 != 0) {
    iVar11 = 0;
    iVar2 = 0;
    puVar10 = *(undefined4 **)(_UNK_017d2314 + 0x17d1db8);
    while( true ) {
      iVar3 = func_0x017d5094(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar11) break;
      iVar3 = func_0x017d48ec(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar3 + 0x60) != '\0') {
        iVar2 = 1;
      }
      iVar3 = func_0x017d5094(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0152983c(iVar3,iVar11,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x24) == iVar2) {
        iVar4 = func_0x017d48ec(param_1);
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
        iVar4 = func_0x017d48ec(param_1);
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
        iVar2 = func_0x017d48ec(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar12 = *(undefined4 *)(iVar2 + 0x50);
        uVar8 = *(undefined4 *)(iVar2 + 0x54);
        if (*(int *)(**(int **)(_UNK_017d2318 + 0x17d1f28) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017d231c + 0x17d1f48));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar2,0);
        if (*(int *)(**(int **)(_UNK_017d2320 + 0x17d1f7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x02aedf90(uVar12,uVar8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0);
        iVar6 = (**(code **)(*param_1 + 0x180))(param_1,*(undefined4 *)(*param_1 + 0x184));
        iVar11 = iStack_3c;
        iVar2 = iStack_40;
        puVar10 = *(undefined4 **)(_UNK_017d2324 + 0x17d1fd0);
        if (iVar6 == 0) {
          if (*(int *)(**(int **)(_UNK_017d2328 + 0x17d1fe4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017d232c + 0x17d2000));
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          uVar16 = func_0x026ffbe0(iVar6,0);
          uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
          if (uStack_48 < uVar7 || uVar7 - uStack_48 < (uint)(uStack_44 <= (uint)uVar16)) {
            if (*(int *)(**(int **)(_UNK_017d2330 + 0x17d2040) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017d2334 + 0x17d205c));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar16 = func_0x026ffbe0(iVar6,0);
            uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
            if (uVar7 <= uVar5 && (uint)((uint)lVar15 <= (uint)uVar16) <= uVar7 - uVar5)
            goto LAB_017d208c;
          }
        }
        else {
LAB_017d208c:
          iVar6 = func_0x017d48ec(param_1);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar6 + 0x60) == '\0') {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x017d48ec(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0540(iVar6,uVar12,**(undefined4 **)(_UNK_017d2340 + 0x17d2228));
              if (iVar6 != 0) {
                iVar6 = func_0x017d48ec(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f05d4(iVar6,uVar12,**(undefined4 **)(_UNK_017d2344 + 0x17d2278));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) goto LAB_017d22d4;
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x017d48ec(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) goto LAB_017d22d4;
            }
          }
          else {
            if (0 < *(int *)(iVar3 + 0x1c)) {
              iVar6 = func_0x017d48ec(param_1);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0x30);
              uVar12 = *(undefined4 *)(iVar3 + 8);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = func_0x024f0540(iVar6,uVar12,**(undefined4 **)(_UNK_017d2338 + 0x17d20fc));
              if (iVar6 != 0) {
                iVar6 = func_0x017d48ec(param_1);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0x30);
                uVar12 = *(undefined4 *)(iVar3 + 8);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x024f05d4(iVar6,uVar12,**(undefined4 **)(_UNK_017d233c + 0x17d214c));
                if (*(int *)(iVar3 + 0x1c) <= iVar6) {
                  iVar6 = func_0x017d48ec(param_1);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0x5c) != 1) goto LAB_017d22d4;
                }
              }
            }
            if (iVar4 != 0) {
              iVar4 = func_0x017d48ec(param_1);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (*(int *)(iVar3 + 0x28) <= *(int *)(iVar4 + 0x58)) {
                iVar4 = func_0x017d48ec(param_1);
                if (iVar4 == 0) {
                  func_0x014388e4();
                }
                if (*(int *)(iVar4 + 0x5c) != 1) goto LAB_017d22d4;
              }
            }
          }
          iVar4 = func_0x017df268(param_1,iVar3);
          if (iVar4 != 0) {
            return iVar3;
          }
        }
      }
LAB_017d22d4:
      iVar11 = iVar11 + 1;
    }
  }
  return 0;
}

