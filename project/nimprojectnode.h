#pragma once

#include <projectexplorer/projectnodes.h>

namespace Utils { class FileName; }

namespace NimEditor {

class ProjectNode : public ProjectExplorer::ProjectNode
{
public:
    ProjectNode(const Utils::FileName &projectFilePath)
        : ProjectExplorer::ProjectNode(projectFilePath)
    {
    }

    QList<ProjectExplorer::ProjectAction> supportedActions(Node *) const Q_DECL_OVERRIDE { return QList<ProjectExplorer::ProjectAction>(); }

    bool canAddSubProject(const QString &) const Q_DECL_OVERRIDE { return false; }

    bool addSubProjects(const QStringList &) Q_DECL_OVERRIDE { return false; }

    bool removeSubProjects(const QStringList &) Q_DECL_OVERRIDE { return false; }

    bool addFiles(const QStringList &, QStringList*) Q_DECL_OVERRIDE { return false; }
    bool removeFiles(const QStringList &, QStringList*) Q_DECL_OVERRIDE { return false; }
    bool deleteFiles(const QStringList &) Q_DECL_OVERRIDE { return false; }
    bool renameFile(const QString &, const QString &) Q_DECL_OVERRIDE { return false; }
};

}
